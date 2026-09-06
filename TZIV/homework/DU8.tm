<?xml version="1.0" encoding="UTF-8"?>
<turingmachine>
	<meta>
		<author />
		<title />
		<description />
		<created>08.04.2024 21:15:23</created>
		<modified>08.04.2024 21:15:23</modified>
	</meta>
	<machine type="TM">
		<tapes>
			<tape id="0">
				<head id="0" position="-4" />
				<cell position="-4">1</cell>
				<cell position="-3">1</cell>
				<cell position="-2">1</cell>
				<cell position="-1">1</cell>
				<cell position="0">1</cell>
				<cell position="1">1</cell>
				<cell position="2">1</cell>
				<cell position="3">1</cell>
				<cell position="4">#</cell>
				<cell position="5">1</cell>
				<cell position="6">1</cell>
				<cell position="7">$</cell>
			</tape>
		</tapes>
		<states>
			<state id="q0">
				<name>q0</name>
				<comment />
				<x>40</x>
				<y>40</y>
				<initial />
			</state>
			<state id="delenie">
				<name>delenie</name>
				<comment />
				<x>190</x>
				<y>40</y>
			</state>
			<state id="del">
				<name>del</name>
				<comment />
				<x>340</x>
				<y>40</y>
			</state>
			<state id="d">
				<name>d</name>
				<comment />
				<x>490</x>
				<y>40</y>
			</state>
			<state id="qf">
				<name>qf</name>
				<comment />
				<x>640</x>
				<y>40</y>
				<final />
			</state>
			<state id="dalej">
				<name>dalej</name>
				<comment />
				<x>40</x>
				<y>190</y>
			</state>
			<state id="ops">
				<name>ops</name>
				<comment />
				<x>190</x>
				<y>190</y>
			</state>
			<state id="dolava">
				<name>dolava</name>
				<comment />
				<x>340</x>
				<y>190</y>
			</state>
			<state id="end">
				<name>end</name>
				<comment />
				<x>490</x>
				<y>190</y>
			</state>
		</states>
		<transitions>
			<transition>
				<from>q0</from>
				<to>q0</to>
				<read>X</read>
				<write>X</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>q0</from>
				<to>delenie</to>
				<read>$</read>
				<write>$</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>delenie</from>
				<to>del</to>
				<read>1</read>
				<write>1_</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>delenie</from>
				<to>delenie</to>
				<read>1_</read>
				<write>1_</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>delenie</from>
				<to>ops</to>
				<read>#</read>
				<write>#</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>del</from>
				<to>del</to>
				<read>1</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>del</from>
				<to>d</to>
				<read>#</read>
				<write>#</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>d</from>
				<to>d</to>
				<read>1_</read>
				<write>1_</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>d</from>
				<to>dalej</to>
				<read>1</read>
				<write>1_</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>d</from>
				<to>end</to>
				<read>Blank</read>
				<write>Blank</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>dalej</from>
				<to>dalej</to>
				<read>X</read>
				<write>X</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>dalej</from>
				<to>delenie</to>
				<read>$</read>
				<write>$</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>ops</from>
				<to>ops</to>
				<read>1_</read>
				<write>1</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>ops</from>
				<to>ops</to>
				<read>$</read>
				<write>$</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>ops</from>
				<to>ops</to>
				<read>1</read>
				<write>1</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>ops</from>
				<to>dolava</to>
				<read>Blank</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>dolava</from>
				<to>dolava</to>
				<read>1</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>dolava</from>
				<to>delenie</to>
				<read>$</read>
				<write>$</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>end</from>
				<to>end</to>
				<read>Y</read>
				<write>Y</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>end</from>
				<to>qf</to>
				<read>Blank</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
		</transitions>
		<code>//dolna cast (log2n)+1

X={1_, 1, #}
Y={1, 1_, #, $}

f(q0, X)=(q0, X, R)
f(q0, $)=(delenie, $, L)

f(delenie, 1)=(del, 1_, L)
f(delenie, 1_)=(delenie, 1_, L)
f(delenie, #)=(ops, #, R)

f(del, 1)=(del, 1, L)
f(del, #)=(d, #, L)

f(d, 1_)=(d, 1_, L)
f(d, 1)=(dalej, 1_, R)
f(d, Blank)=(end, Blank, R)

f(dalej, X)=(dalej, X, R)
f(dalej, $)=(delenie, $, L)

f(ops, 1_)=(ops, 1, R)
f(ops, $)=(ops, $, R)
f(ops, 1)=(ops, 1, R)
f(ops, Blank)=(dolava, 1, L)

f(dolava, 1)=(dolava, 1, L)
f(dolava, $)=(delenie, $, L)

f(end, Y)=(end, Y, R)
f(end, Blank)=(qf, 1, L)</code>
	</machine>
</turingmachine>