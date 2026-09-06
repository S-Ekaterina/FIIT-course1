<?xml version="1.0" encoding="UTF-8"?>
<turingmachine>
	<meta>
		<author />
		<title />
		<description />
		<created>03.04.2024 17:02:10</created>
		<modified>03.04.2024 17:03:24</modified>
	</meta>
	<machine type="TM">
		<tapes>
			<tape id="0">
				<head id="0" position="-1" />
				<cell position="-1">1</cell>
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
			<state id="oper_b">
				<name>oper_b</name>
				<comment />
				<x>187</x>
				<y>77</y>
			</state>
			<state id="q0">
				<name>q0</name>
				<comment />
				<x>231</x>
				<y>256</y>
				<initial />
			</state>
			<state id="copy">
				<name>copy</name>
				<comment />
				<x>565</x>
				<y>36</y>
			</state>
			<state id="doprava">
				<name>doprava</name>
				<comment />
				<x>619</x>
				<y>192</y>
			</state>
			<state id="cisti">
				<name>cisti</name>
				<comment />
				<x>888</x>
				<y>118</y>
			</state>
			<state id="dolava">
				<name>dolava</name>
				<comment />
				<x>429</x>
				<y>140</y>
			</state>
			<state id="zac">
				<name>zac</name>
				<comment />
				<x>774</x>
				<y>293</y>
			</state>
			<state id="qf">
				<name>qf</name>
				<comment />
				<x>82</x>
				<y>297</y>
				<final />
			</state>
		</states>
		<transitions>
			<transition>
				<from>q0</from>
				<to>oper_b</to>
				<read>1</read>
				<write>1_</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>q0</from>
				<to>qf</to>
				<read>#</read>
				<write>#</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>oper_b</from>
				<to>oper_b</to>
				<read>1</read>
				<write>1</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>oper_b</from>
				<to>copy</to>
				<read>#</read>
				<write>#</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>copy</from>
				<to>doprava</to>
				<read>1</read>
				<write>1_</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>copy</from>
				<to>cisti</to>
				<read>$</read>
				<write>$</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>doprava</from>
				<to>doprava</to>
				<read>B</read>
				<write>B</write>
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
				<read>B</read>
				<write>B</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>dolava</from>
				<to>copy</to>
				<read>1_</read>
				<write>1_</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>cisti</from>
				<to>cisti</to>
				<read>1_</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>cisti</from>
				<to>zac</to>
				<read>#</read>
				<write>#</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>zac</from>
				<to>zac</to>
				<read>1</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>zac</from>
				<to>q0</to>
				<read>1_</read>
				<write>1_</write>
				<move>Right</move>
				<comment />
			</transition>
		</transitions>
		<code>//a*b

B={1,$}

f(q0, 1)=(oper_b, 1_, R)
f(q0, #)=(qf, #, R)

f(oper_b, 1)=(oper_b, 1, R)
f(oper_b, #)=(copy, #, R)

f(copy, 1)=(doprava, 1_, R)
f(copy, $)=(cisti, $, L)

f(doprava, B)=(doprava, B, R)
f(doprava, Blank)=(dolava, 1, L)

f(dolava, B)=(dolava, B, L)
f(dolava, 1_)=(copy, 1_, R)

f(cisti, 1_)=(cisti, 1, L)
f(cisti, #)=(zac, #, L)

f(zac, 1)=(zac, 1, L)
f(zac, 1_)=(q0, 1_, R)</code>
	</machine>
</turingmachine>