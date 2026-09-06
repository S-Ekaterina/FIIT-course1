<?xml version="1.0" encoding="UTF-8"?>
<turingmachine>
	<meta>
		<author />
		<title />
		<description />
		<created>7. 4. 2025 22:05:44</created>
		<modified>7. 4. 2025 22:05:44</modified>
	</meta>
	<machine type="TM">
		<tapes>
			<tape id="0">
				<head id="0" position="-1" />
				<cell position="-1">1</cell>
				<cell position="0">1</cell>
				<cell position="1">1</cell>
				<cell position="2">$</cell>
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
			<state id="q2">
				<name>q2</name>
				<comment />
				<x>40</x>
				<y>40</y>
			</state>
			<state id="q1">
				<name>q1</name>
				<comment />
				<x>190</x>
				<y>40</y>
			</state>
			<state id="q3">
				<name>q3</name>
				<comment />
				<x>340</x>
				<y>40</y>
			</state>
			<state id="q">
				<name>q</name>
				<comment />
				<x>490</x>
				<y>40</y>
			</state>
			<state id="q4">
				<name>q4</name>
				<comment />
				<x>640</x>
				<y>40</y>
			</state>
			<state id="q5">
				<name>q5</name>
				<comment />
				<x>40</x>
				<y>40</y>
			</state>
		</states>
		<transitions>
			<transition>
				<from>q0</from>
				<to>q2</to>
				<read>1</read>
				<write>1_</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>q0</from>
				<to>q4</to>
				<read>#</read>
				<write>#</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>q2</from>
				<to>q2</to>
				<read>1</read>
				<write>1</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>q2</from>
				<to>q2</to>
				<read>$</read>
				<write>#</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>q2</from>
				<to>q2</to>
				<read>#</read>
				<write>#</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>q2</from>
				<to>q3</to>
				<read>Blank</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>q3</from>
				<to>q3</to>
				<read>#</read>
				<write>#</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>q3</from>
				<to>q3</to>
				<read>1</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>q3</from>
				<to>q0</to>
				<read>1_</read>
				<write>1_</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>q4</from>
				<to>q4</to>
				<read>1</read>
				<write>1</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>q4</from>
				<to>q5</to>
				<read>Blank</read>
				<write>$</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>q5</from>
				<to>q5</to>
				<read>1</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>q5</from>
				<to>q5</to>
				<read>1_</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>q5</from>
				<to>q5</to>
				<read>#</read>
				<write>#</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>q5</from>
				<to>q</to>
				<read>Blank</read>
				<write>Blank</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>q</from>
				<to>oper_b</to>
				<read>1</read>
				<write>1_</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>q</from>
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
				<to>q</to>
				<read>1_</read>
				<write>1_</write>
				<move>Right</move>
				<comment />
			</transition>
		</transitions>
		<code>//a*a

B={1,$}

f(q0, 1)=(q2, 1_, R)
f(q0, #)=(q4, #, R)

f(q2, 1)=(q2, 1, R)
f(q2, $)=(q2, #, R)
f(q2, #)=(q2, #, R)
f(q2, Blank)=(q3, 1, L)

f(q3, #)=(q3, #, L)
f(q3, 1)=(q3, 1, L)
f(q3, 1_)=(q0, 1_, R)

f(q4, 1)=(q4, 1, R)
f(q4, Blank)=(q5, $, L)

f(q5, 1)=(q5, 1, L)
f(q5, 1_)=(q5, 1, L)
f(q5, #)=(q5, #, L)
f(q5, Blank)=(q, Blank, R)

f(q, 1)=(oper_b, 1_, R)
f(q, #)=(qf, #, R)

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
f(zac, 1_)=(q, 1_, R)</code>
	</machine>
</turingmachine>