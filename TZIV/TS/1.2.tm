<?xml version="1.0" encoding="UTF-8"?>
<turingmachine>
	<meta>
		<author />
		<title />
		<description />
		<created>03.04.2024 16:49:39</created>
		<modified>03.04.2024 16:49:39</modified>
	</meta>
	<machine type="TM">
		<tapes>
			<tape id="0">
				<head id="0" position="0" />
				<cell position="0">1</cell>
				<cell position="1">1</cell>
				<cell position="2">#</cell>
				<cell position="3">1</cell>
				<cell position="4">1</cell>
				<cell position="5">1</cell>
				<cell position="6">$</cell>
			</tape>
		</tapes>
		<states>
			<state id="doprava">
				<name>doprava</name>
				<comment />
				<x>223</x>
				<y>70</y>
			</state>
			<state id="q0">
				<name>q0</name>
				<comment />
				<x>69</x>
				<y>88</y>
				<initial />
			</state>
			<state id="dop2">
				<name>dop2</name>
				<comment />
				<x>369</x>
				<y>66</y>
			</state>
			<state id="dolava">
				<name>dolava</name>
				<comment />
				<x>519</x>
				<y>109</y>
			</state>
			<state id="qf">
				<name>qf</name>
				<comment />
				<x>73</x>
				<y>316</y>
				<final />
			</state>
			<state id="delenie">
				<name>delenie</name>
				<comment />
				<x>164</x>
				<y>200</y>
			</state>
			<state id="del2">
				<name>del2</name>
				<comment />
				<x>263</x>
				<y>327</y>
			</state>
			<state id="dopr2">
				<name>dopr2</name>
				<comment />
				<x>737</x>
				<y>296</y>
			</state>
			<state id="dol2">
				<name>dol2</name>
				<comment />
				<x>685</x>
				<y>152</y>
			</state>
		</states>
		<transitions>
			<transition>
				<from>q0</from>
				<to>doprava</to>
				<read>1</read>
				<write>1_</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>q0</from>
				<to>delenie</to>
				<read>#</read>
				<write>#</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>doprava</from>
				<to>doprava</to>
				<read>X</read>
				<write>X</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>doprava</from>
				<to>dop2</to>
				<read>Blank</read>
				<write>1</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>dop2</from>
				<to>dolava</to>
				<read>Blank</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>dolava</from>
				<to>dolava</to>
				<read>X</read>
				<write>X</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>dolava</from>
				<to>q0</to>
				<read>1_</read>
				<write>1_</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>delenie</from>
				<to>del2</to>
				<read>1</read>
				<write>1_</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>delenie</from>
				<to>qf</to>
				<read>$</read>
				<write>$</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>del2</from>
				<to>dopr2</to>
				<read>1</read>
				<write>1_</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>del2</from>
				<to>qf</to>
				<read>$</read>
				<write>$</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>dopr2</from>
				<to>dopr2</to>
				<read>X</read>
				<write>X</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>dopr2</from>
				<to>dol2</to>
				<read>Blank</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>dol2</from>
				<to>dol2</to>
				<read>X</read>
				<write>X</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>dol2</from>
				<to>delenie</to>
				<read>1_</read>
				<write>1_</write>
				<move>Right</move>
				<comment />
			</transition>
		</transitions>
		<code>//a*2+dolna cast(b/2)

X={1, #, $}
Y={1_, #, $}

f(q0, 1)=(doprava, 1_, R)
f(q0, #)=(delenie, #, R)

f(doprava, X)=(doprava, X, R)
f(doprava, Blank)=(dop2, 1, R)

f(dop2, Blank)=(dolava, 1, L)

f(dolava, X)=(dolava, X, L)
f(dolava, 1_)=(q0, 1_, R)

f(delenie, 1)=(del2, 1_, R)
f(delenie, $)=(qf, $, R)

f(del2, 1)=(dopr2, 1_, R)
f(del2, $)=(qf, $, R)

f(dopr2, X)=(dopr2, X, R)
f(dopr2, Blank)=(dol2, 1, L)

f(dol2, X)=(dol2, X, L)
f(dol2, 1_)=(delenie, 1_, R)</code>
	</machine>
</turingmachine>