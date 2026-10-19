// Ghidra headless post-script: lay out WROOT.EXE (Aztec C86 small model) and its overlays.
// Root image is imported raw at 0000:0000 (BinaryLoader). Code 0000:0000-4572, overlay
// code area 0000:4572, DGROUP at 0FD8:0000 (init 0x6be, bss to 4fee, overlay data at 4fee).
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import java.io.File;
import java.nio.file.Files;

public class Wiz6Setup extends GhidraScript {
	static final int OVL_CODE = 0x4572, DGROUP = 0xfd8, OVL_DATA = 0x4fee;

	Address seg(int s, int o) {
		return ((SegmentedAddressSpace) currentProgram.getAddressFactory().getDefaultAddressSpace())
			.getAddress(s, o);
	}

	@Override
	public void run() throws Exception {
		String dir = getScriptArgs()[0];
		Memory mem = currentProgram.getMemory();
		// split the raw image into root code, (empty) overlay area, and DGROUP
		mem.split(mem.getBlock(seg(0, 0)), seg(0, OVL_CODE));
		mem.split(mem.getBlock(seg(0, OVL_CODE)), seg(DGROUP, 0));
		mem.getBlock(seg(0, 0)).setName("ROOT_CODE");
		mem.getBlock(seg(0, OVL_CODE)).setName("OVL_AREA");
		MemoryBlock d = mem.getBlock(seg(DGROUP, 0));
		d.setName("DGROUP");
		d.setWrite(true);
		d.setExecute(false);
		int dlen = (int) d.getSize();
		mem.createUninitializedBlock("BSS", seg(DGROUP, dlen), OVL_DATA - dlen, false).setWrite(true);
		mem.createUninitializedBlock("STACK", seg(DGROUP, OVL_DATA), 0xb000 - OVL_DATA, false).setWrite(true);

		createFunction(seg(0, 0x4072), "_begin");
		addEntryPoint(seg(0, 0x4072));

		for (File f : new File(dir).listFiles()) {
			String n = f.getName();
			if (!n.toUpperCase().endsWith(".OVR")) continue;
			byte[] b = Files.readAllBytes(f.toPath());
			int csz = (b[4] & 0xff) | (b[5] & 0xff) << 8;
			int dsz = (b[8] & 0xff) | (b[9] & 0xff) << 8;
			int bsz = (b[10] & 0xff) | (b[11] & 0xff) << 8;
			String base = n.substring(0, n.length() - 4);
			byte[] code = java.util.Arrays.copyOfRange(b, 14, 14 + csz);
			MemoryBlock cb = mem.createInitializedBlock(base + "_C", seg(0, OVL_CODE),
				new java.io.ByteArrayInputStream(code), csz, monitor, true);
			cb.setExecute(true);
			if (dsz + bsz > 0) {
				byte[] all = new byte[dsz + bsz];
				System.arraycopy(b, 14 + csz, all, 0, dsz);
				mem.createInitializedBlock(base + "_D", seg(DGROUP, OVL_DATA),
					new java.io.ByteArrayInputStream(all), dsz + bsz, monitor, true).setWrite(true);
			}
			Address ep = cb.getStart();
			createFunction(ep, base.toLowerCase() + "_main");
			addEntryPoint(ep);
			println(String.format("%s code=%x data=%x bss=%x", n, csz, dsz, bsz));
		}
	}
}
