"""Shared pieces of the case specs. Per-area specs live in specs_<area>.py; gen.py
finds every Spec in them."""


def pick(rnd, lo, hi, edges=()):
    """Mostly uniform in lo..hi, sometimes an edge value."""
    if edges and rnd.random() < 0.15:
        return rnd.choice(edges)
    return rnd.randint(lo, hi)


# Lasting effects of stubbed functions on mechanics state, per overlay:
# {ovl: {addr: f(machine)}}. Areas add theirs.
STUB_FX = {}


class Spec:
    """ovl, addr: the original function. make(rnd) -> (state {field: value}, args
    [, cargs [, raw {DS offset: bytes}]]): args go to Go, cargs (default args) to the C.
    stubs: overlay functions to stub. void: no return value."""
    def __init__(self, ovl, addr, make, stubs=(), void=False):
        self.ovl, self.addr, self.make, self.stubs, self.void = ovl, addr, make, stubs, void
        self.stub_fx = STUB_FX.get(ovl, {})


SCRATCH = 0x9100   # DS buffer for pointer args (in the ignored stack area, far below sp)
