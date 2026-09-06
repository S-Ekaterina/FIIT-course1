<?xml version="1.0" encoding="UTF-8"?>
<turingmachine>
	<meta>
		<author />
		<title />
		<description />
		<created>03.04.2024 16:32:21</created>
		<modified>03.04.2024 16:32:21</modified>
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
				<cell position="6">1</cell>
				<cell position="7">$</cell>
			</tape>
		</tapes>
		<states>
			<state id="q0">
				<name>q0</name>
				<comment />
				<x>81</x>
				<y>143</y>
				<initial />
			</state>
			<state id="qf">
				<name>qf</name>
				<comment />
				<x>628</x>
				<y>296</y>
				<final />
			</state>
			<state id="doprava">
				<name>doprava</name>
				<comment />
				<x>361</x>
				<y>59</y>
			</state>
			<state id="dolava">
				<name>dolava</name>
				<comment />
				<x>542</x>
				<y>126</y>
			</state>
			<state id="nazac">
				<name>nazac</name>
				<comment />
				<x>775</x>
				<y>149</y>
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
				<to>q0</to>
				<read>#</read>
				<write>#</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>q0</from>
				<to>qf</to>
				<read>$</read>
				<write>$</write>
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
				<from>nazac</from>
				<to>nazac</to>
				<read>Y</read>
				<write>X</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>nazac</from>
				<to>qf</to>
				<read>Blank</read>
				<write>Blank</write>
				<move>Right</move>
				<comment />
			</transition>
		</transitions>
		<code>//a+b

X={1, #, $}
Y={1_, #, $}

f(q0, 1)=(doprava, 1_, R)
f(q0, #)=(q0,#,R)
f(q0, $)=(qf, $, R)

f(doprava, X)=(doprava, X, R)
f(doprava, Blank)=(dolava, 1, L)

f(dolava, X)=(dolava, X, L)
f(dolava, 1_)=(q0,1_,R)

f(nazac, Y)=(nazac, X, L)
f(nazac, Blank)=(qf, Blank, R)</code>
	</machine>
</turingmachine>