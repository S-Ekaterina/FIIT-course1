<?xml version="1.0" encoding="UTF-8"?>
<turingmachine>
	<meta>
		<author />
		<title />
		<description />
		<created>03.04.2024 17:32:51</created>
		<modified>04.04.2024 12:33:21</modified>
	</meta>
	<machine type="TM">
		<tapes>
			<tape id="0">
				<head id="0" position="0" />
				<cell position="0">1</cell>
				<cell position="1">1</cell>
				<cell position="2">1</cell>
				<cell position="3">1</cell>
				<cell position="4">1</cell>
				<cell position="5">1</cell>
				<cell position="6">1</cell>
				<cell position="7">1</cell>
				<cell position="8">$</cell>
			</tape>
		</tapes>
		<states>
			<state id="doprava">
				<name>doprava</name>
				<comment />
				<x>71</x>
				<y>112</y>
			</state>
			<state id="q0">
				<name>q0</name>
				<comment />
				<x>146</x>
				<y>336</y>
				<initial />
			</state>
			<state id="dop">
				<name>dop</name>
				<comment />
				<x>376</x>
				<y>66</y>
			</state>
			<state id="dolava">
				<name>dolava</name>
				<comment />
				<x>522</x>
				<y>96</y>
			</state>
			<state id="qf">
				<name>qf</name>
				<comment />
				<x>640</x>
				<y>40</y>
				<final />
			</state>
			<state id="dol">
				<name>dol</name>
				<comment />
				<x>715</x>
				<y>217</y>
			</state>
			<state id="qq">
				<name>qq</name>
				<comment />
				<x>190</x>
				<y>190</y>
			</state>
			<state id="ednotka">
				<name>ednotka</name>
				<comment />
				<x>594</x>
				<y>306</y>
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
				<to>ednotka</to>
				<read>$</read>
				<write>$</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>q0</from>
				<to>q0</to>
				<read>1_</read>
				<write>1_</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>doprava</from>
				<to>qq</to>
				<read>1</read>
				<write>1</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>doprava</from>
				<to>doprava</to>
				<read>1_</read>
				<write>1_</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>doprava</from>
				<to>dop</to>
				<read>$</read>
				<write>$</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>qq</from>
				<to>dop</to>
				<read>$</read>
				<write>$</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>qq</from>
				<to>doprava</to>
				<read>1</read>
				<write>1_</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>qq</from>
				<to>qq</to>
				<read>1_</read>
				<write>1_</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>dop</from>
				<to>dolava</to>
				<read>Blank</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>dop</from>
				<to>dop</to>
				<read>1</read>
				<write>1</write>
				<move>Right</move>
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
				<read>Blank</read>
				<write>Blank</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>ednotka</from>
				<to>qf</to>
				<read>Blank</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>ednotka</from>
				<to>ednotka</to>
				<read>1</read>
				<write>1</write>
				<move>Right</move>
				<comment />
			</transition>
		</transitions>
		<code>//dolna cast (log2n)+1

X={1_, 1, $}

f(q0, 1)=(doprava, 1_, R)
f(q0, $)=(ednotka, $, R)
f(q0, 1_)=(q0, 1_, R)

f(doprava, 1)=(qq, 1, R)
f(doprava, 1_)=(doprava, 1_, R)
f(doprava, $)=(dop, $, R)

f(qq, $)=(dop, $, R)
f(qq, 1)=(doprava, 1_, R)
f(qq, 1_)=(qq, 1_, R)

f(dop, Blank)=(dolava, 1, L)
f(dop, 1)=(dop, 1, R)

f(dolava, X)=(dolava, X, L)
f(dolava, Blank)=(q0, Blank, R)

f(ednotka, Blank)=(qf, 1, L)
f(ednotka, 1)=(ednotka, 1, R)</code>
	</machine>
</turingmachine>