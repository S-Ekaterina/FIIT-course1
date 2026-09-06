<?xml version="1.0" encoding="UTF-8"?>
<turingmachine>
	<meta>
		<author />
		<title />
		<description />
		<created>24.04.2024 1:15:46</created>
		<modified>24.04.2024 1:15:46</modified>
	</meta>
	<machine type="TM">
		<tapes>
			<tape id="0">
				<head id="0" position="0" />
				<cell position="0">a</cell>
				<cell position="1">a</cell>
				<cell position="2">g</cell>
				<cell position="3">a</cell>
				<cell position="4">k</cell>
				<cell position="5">e</cell>
				<cell position="6">z</cell>
				<cell position="7">$</cell>
			</tape>
		</tapes>
		<states>
			<state id="q0">
				<name>q0</name>
				<comment />
				<x>130</x>
				<y>128</y>
				<initial />
			</state>
			<state id="qf">
				<name>qf</name>
				<comment />
				<x>771</x>
				<y>161</y>
				<final />
			</state>
			<state id="encode">
				<name>encode</name>
				<comment />
				<x>340</x>
				<y>40</y>
			</state>
			<state id="copy">
				<name>copy</name>
				<comment />
				<x>490</x>
				<y>40</y>
			</state>
			<state id="add_separator">
				<name>add_separator</name>
				<comment />
				<x>640</x>
				<y>40</y>
			</state>
			<state id="calculate_difference">
				<name>calculate_difference</name>
				<comment />
				<x>40</x>
				<y>190</y>
			</state>
			<state id="nazac">
				<name>nazac</name>
				<comment />
				<x>190</x>
				<y>190</y>
			</state>
			<state id="z1">
				<name>z1</name>
				<comment />
				<x>231</x>
				<y>129</y>
			</state>
			<state id="z2">
				<name>z2</name>
				<comment />
				<x>361</x>
				<y>106</y>
			</state>
			<state id="z3">
				<name>z3</name>
				<comment />
				<x>340</x>
				<y>40</y>
			</state>
			<state id="z4">
				<name>z4</name>
				<comment />
				<x>490</x>
				<y>40</y>
			</state>
			<state id="z5">
				<name>z5</name>
				<comment />
				<x>640</x>
				<y>40</y>
			</state>
			<state id="y1">
				<name>y1</name>
				<comment />
				<x>40</x>
				<y>190</y>
			</state>
			<state id="y2">
				<name>y2</name>
				<comment />
				<x>190</x>
				<y>190</y>
			</state>
			<state id="y3">
				<name>y3</name>
				<comment />
				<x>340</x>
				<y>190</y>
			</state>
			<state id="y4">
				<name>y4</name>
				<comment />
				<x>490</x>
				<y>190</y>
			</state>
			<state id="y5">
				<name>y5</name>
				<comment />
				<x>640</x>
				<y>190</y>
			</state>
			<state id="x1">
				<name>x1</name>
				<comment />
				<x>40</x>
				<y>340</y>
			</state>
			<state id="x2">
				<name>x2</name>
				<comment />
				<x>190</x>
				<y>340</y>
			</state>
			<state id="x3">
				<name>x3</name>
				<comment />
				<x>340</x>
				<y>340</y>
			</state>
			<state id="x4">
				<name>x4</name>
				<comment />
				<x>490</x>
				<y>340</y>
			</state>
			<state id="x5">
				<name>x5</name>
				<comment />
				<x>640</x>
				<y>340</y>
			</state>
			<state id="w1">
				<name>w1</name>
				<comment />
				<x>40</x>
				<y>490</y>
			</state>
			<state id="w2">
				<name>w2</name>
				<comment />
				<x>190</x>
				<y>490</y>
			</state>
			<state id="w3">
				<name>w3</name>
				<comment />
				<x>340</x>
				<y>490</y>
			</state>
			<state id="w4">
				<name>w4</name>
				<comment />
				<x>490</x>
				<y>490</y>
			</state>
			<state id="w5">
				<name>w5</name>
				<comment />
				<x>640</x>
				<y>490</y>
			</state>
			<state id="v1">
				<name>v1</name>
				<comment />
				<x>40</x>
				<y>640</y>
			</state>
			<state id="v2">
				<name>v2</name>
				<comment />
				<x>190</x>
				<y>640</y>
			</state>
			<state id="v3">
				<name>v3</name>
				<comment />
				<x>340</x>
				<y>640</y>
			</state>
			<state id="v4">
				<name>v4</name>
				<comment />
				<x>490</x>
				<y>640</y>
			</state>
			<state id="v5">
				<name>v5</name>
				<comment />
				<x>640</x>
				<y>640</y>
			</state>
			<state id="u1">
				<name>u1</name>
				<comment />
				<x>40</x>
				<y>790</y>
			</state>
			<state id="u2">
				<name>u2</name>
				<comment />
				<x>190</x>
				<y>790</y>
			</state>
			<state id="u3">
				<name>u3</name>
				<comment />
				<x>340</x>
				<y>790</y>
			</state>
			<state id="u4">
				<name>u4</name>
				<comment />
				<x>490</x>
				<y>790</y>
			</state>
			<state id="u5">
				<name>u5</name>
				<comment />
				<x>640</x>
				<y>790</y>
			</state>
			<state id="t1">
				<name>t1</name>
				<comment />
				<x>40</x>
				<y>940</y>
			</state>
			<state id="c2">
				<name>c2</name>
				<comment />
				<x>190</x>
				<y>940</y>
			</state>
			<state id="c1">
				<name>c1</name>
				<comment />
				<x>340</x>
				<y>940</y>
			</state>
			<state id="c3">
				<name>c3</name>
				<comment />
				<x>490</x>
				<y>940</y>
			</state>
			<state id="c4">
				<name>c4</name>
				<comment />
				<x>640</x>
				<y>940</y>
			</state>
			<state id="c5">
				<name>c5</name>
				<comment />
				<x>40</x>
				<y>1090</y>
			</state>
			<state id="b1">
				<name>b1</name>
				<comment />
				<x>190</x>
				<y>1090</y>
			</state>
			<state id="b2">
				<name>b2</name>
				<comment />
				<x>340</x>
				<y>1090</y>
			</state>
			<state id="b3">
				<name>b3</name>
				<comment />
				<x>490</x>
				<y>1090</y>
			</state>
			<state id="b4">
				<name>b4</name>
				<comment />
				<x>640</x>
				<y>1090</y>
			</state>
			<state id="a1">
				<name>a1</name>
				<comment />
				<x>40</x>
				<y>1240</y>
			</state>
			<state id="a2">
				<name>a2</name>
				<comment />
				<x>190</x>
				<y>1240</y>
			</state>
			<state id="a3">
				<name>a3</name>
				<comment />
				<x>340</x>
				<y>1240</y>
			</state>
			<state id="a4">
				<name>a4</name>
				<comment />
				<x>490</x>
				<y>1240</y>
			</state>
			<state id="a5">
				<name>a5</name>
				<comment />
				<x>640</x>
				<y>1240</y>
			</state>
			<state id="End">
				<name>End</name>
				<comment />
				<x>40</x>
				<y>1390</y>
			</state>
			<state id="t2">
				<name>t2</name>
				<comment />
				<x>40</x>
				<y>40</y>
			</state>
			<state id="t3">
				<name>t3</name>
				<comment />
				<x>182</x>
				<y>137</y>
			</state>
			<state id="t4">
				<name>t4</name>
				<comment />
				<x>340</x>
				<y>40</y>
			</state>
			<state id="t5">
				<name>t5</name>
				<comment />
				<x>490</x>
				<y>40</y>
			</state>
			<state id="s1">
				<name>s1</name>
				<comment />
				<x>640</x>
				<y>40</y>
			</state>
			<state id="s2">
				<name>s2</name>
				<comment />
				<x>40</x>
				<y>190</y>
			</state>
			<state id="s3">
				<name>s3</name>
				<comment />
				<x>190</x>
				<y>190</y>
			</state>
			<state id="s4">
				<name>s4</name>
				<comment />
				<x>340</x>
				<y>190</y>
			</state>
			<state id="s5">
				<name>s5</name>
				<comment />
				<x>490</x>
				<y>190</y>
			</state>
			<state id="r1">
				<name>r1</name>
				<comment />
				<x>640</x>
				<y>190</y>
			</state>
			<state id="r2">
				<name>r2</name>
				<comment />
				<x>40</x>
				<y>340</y>
			</state>
			<state id="r3">
				<name>r3</name>
				<comment />
				<x>190</x>
				<y>340</y>
			</state>
			<state id="r4">
				<name>r4</name>
				<comment />
				<x>340</x>
				<y>340</y>
			</state>
			<state id="r5">
				<name>r5</name>
				<comment />
				<x>490</x>
				<y>340</y>
			</state>
			<state id="q1">
				<name>q1</name>
				<comment />
				<x>640</x>
				<y>340</y>
			</state>
			<state id="q2">
				<name>q2</name>
				<comment />
				<x>40</x>
				<y>490</y>
			</state>
			<state id="q3">
				<name>q3</name>
				<comment />
				<x>190</x>
				<y>490</y>
			</state>
			<state id="q4">
				<name>q4</name>
				<comment />
				<x>340</x>
				<y>490</y>
			</state>
			<state id="q5">
				<name>q5</name>
				<comment />
				<x>490</x>
				<y>490</y>
			</state>
			<state id="p1">
				<name>p1</name>
				<comment />
				<x>640</x>
				<y>490</y>
			</state>
			<state id="p2">
				<name>p2</name>
				<comment />
				<x>40</x>
				<y>640</y>
			</state>
			<state id="p3">
				<name>p3</name>
				<comment />
				<x>190</x>
				<y>640</y>
			</state>
			<state id="p4">
				<name>p4</name>
				<comment />
				<x>340</x>
				<y>640</y>
			</state>
			<state id="p5">
				<name>p5</name>
				<comment />
				<x>490</x>
				<y>640</y>
			</state>
			<state id="o1">
				<name>o1</name>
				<comment />
				<x>640</x>
				<y>640</y>
			</state>
			<state id="o2">
				<name>o2</name>
				<comment />
				<x>40</x>
				<y>790</y>
			</state>
			<state id="o3">
				<name>o3</name>
				<comment />
				<x>190</x>
				<y>790</y>
			</state>
			<state id="o4">
				<name>o4</name>
				<comment />
				<x>340</x>
				<y>790</y>
			</state>
			<state id="o5">
				<name>o5</name>
				<comment />
				<x>490</x>
				<y>790</y>
			</state>
			<state id="n1">
				<name>n1</name>
				<comment />
				<x>640</x>
				<y>790</y>
			</state>
			<state id="n2">
				<name>n2</name>
				<comment />
				<x>40</x>
				<y>940</y>
			</state>
			<state id="n3">
				<name>n3</name>
				<comment />
				<x>190</x>
				<y>940</y>
			</state>
			<state id="n4">
				<name>n4</name>
				<comment />
				<x>340</x>
				<y>940</y>
			</state>
			<state id="n5">
				<name>n5</name>
				<comment />
				<x>490</x>
				<y>940</y>
			</state>
			<state id="m1">
				<name>m1</name>
				<comment />
				<x>640</x>
				<y>940</y>
			</state>
			<state id="m2">
				<name>m2</name>
				<comment />
				<x>40</x>
				<y>40</y>
			</state>
			<state id="m3">
				<name>m3</name>
				<comment />
				<x>190</x>
				<y>40</y>
			</state>
			<state id="m4">
				<name>m4</name>
				<comment />
				<x>340</x>
				<y>40</y>
			</state>
			<state id="m5">
				<name>m5</name>
				<comment />
				<x>490</x>
				<y>40</y>
			</state>
			<state id="l1">
				<name>l1</name>
				<comment />
				<x>640</x>
				<y>40</y>
			</state>
			<state id="l2">
				<name>l2</name>
				<comment />
				<x>40</x>
				<y>190</y>
			</state>
			<state id="l3">
				<name>l3</name>
				<comment />
				<x>190</x>
				<y>190</y>
			</state>
			<state id="l4">
				<name>l4</name>
				<comment />
				<x>340</x>
				<y>190</y>
			</state>
			<state id="l5">
				<name>l5</name>
				<comment />
				<x>490</x>
				<y>190</y>
			</state>
			<state id="k1">
				<name>k1</name>
				<comment />
				<x>640</x>
				<y>190</y>
			</state>
			<state id="k2">
				<name>k2</name>
				<comment />
				<x>40</x>
				<y>340</y>
			</state>
			<state id="k3">
				<name>k3</name>
				<comment />
				<x>190</x>
				<y>340</y>
			</state>
			<state id="k4">
				<name>k4</name>
				<comment />
				<x>340</x>
				<y>340</y>
			</state>
			<state id="k5">
				<name>k5</name>
				<comment />
				<x>490</x>
				<y>340</y>
			</state>
			<state id="j1">
				<name>j1</name>
				<comment />
				<x>640</x>
				<y>340</y>
			</state>
			<state id="j2">
				<name>j2</name>
				<comment />
				<x>40</x>
				<y>490</y>
			</state>
			<state id="j3">
				<name>j3</name>
				<comment />
				<x>190</x>
				<y>490</y>
			</state>
			<state id="j4">
				<name>j4</name>
				<comment />
				<x>340</x>
				<y>490</y>
			</state>
			<state id="j5">
				<name>j5</name>
				<comment />
				<x>490</x>
				<y>490</y>
			</state>
			<state id="i1">
				<name>i1</name>
				<comment />
				<x>640</x>
				<y>490</y>
			</state>
			<state id="i2">
				<name>i2</name>
				<comment />
				<x>40</x>
				<y>640</y>
			</state>
			<state id="i3">
				<name>i3</name>
				<comment />
				<x>190</x>
				<y>640</y>
			</state>
			<state id="i4">
				<name>i4</name>
				<comment />
				<x>340</x>
				<y>640</y>
			</state>
			<state id="i5">
				<name>i5</name>
				<comment />
				<x>490</x>
				<y>640</y>
			</state>
			<state id="h1">
				<name>h1</name>
				<comment />
				<x>640</x>
				<y>640</y>
			</state>
			<state id="h2">
				<name>h2</name>
				<comment />
				<x>40</x>
				<y>790</y>
			</state>
			<state id="h3">
				<name>h3</name>
				<comment />
				<x>190</x>
				<y>790</y>
			</state>
			<state id="h4">
				<name>h4</name>
				<comment />
				<x>340</x>
				<y>790</y>
			</state>
			<state id="h5">
				<name>h5</name>
				<comment />
				<x>490</x>
				<y>790</y>
			</state>
			<state id="g1">
				<name>g1</name>
				<comment />
				<x>640</x>
				<y>790</y>
			</state>
			<state id="g2">
				<name>g2</name>
				<comment />
				<x>40</x>
				<y>940</y>
			</state>
			<state id="g3">
				<name>g3</name>
				<comment />
				<x>190</x>
				<y>940</y>
			</state>
			<state id="g4">
				<name>g4</name>
				<comment />
				<x>340</x>
				<y>940</y>
			</state>
			<state id="f1">
				<name>f1</name>
				<comment />
				<x>490</x>
				<y>940</y>
			</state>
			<state id="f2">
				<name>f2</name>
				<comment />
				<x>640</x>
				<y>940</y>
			</state>
			<state id="f3">
				<name>f3</name>
				<comment />
				<x>40</x>
				<y>1090</y>
			</state>
			<state id="f4">
				<name>f4</name>
				<comment />
				<x>190</x>
				<y>1090</y>
			</state>
			<state id="f5">
				<name>f5</name>
				<comment />
				<x>340</x>
				<y>1090</y>
			</state>
			<state id="e1">
				<name>e1</name>
				<comment />
				<x>490</x>
				<y>1090</y>
			</state>
			<state id="e2">
				<name>e2</name>
				<comment />
				<x>640</x>
				<y>1090</y>
			</state>
			<state id="e3">
				<name>e3</name>
				<comment />
				<x>40</x>
				<y>1240</y>
			</state>
			<state id="e4">
				<name>e4</name>
				<comment />
				<x>190</x>
				<y>1240</y>
			</state>
			<state id="d1">
				<name>d1</name>
				<comment />
				<x>340</x>
				<y>1240</y>
			</state>
			<state id="d2">
				<name>d2</name>
				<comment />
				<x>490</x>
				<y>1240</y>
			</state>
			<state id="d3">
				<name>d3</name>
				<comment />
				<x>640</x>
				<y>1240</y>
			</state>
			<state id="d4">
				<name>d4</name>
				<comment />
				<x>40</x>
				<y>1390</y>
			</state>
			<state id="d5">
				<name>d5</name>
				<comment />
				<x>190</x>
				<y>1390</y>
			</state>
			<state id="Start">
				<name>Start</name>
				<comment />
				<x>340</x>
				<y>1390</y>
			</state>
			<state id="gkj">
				<name>gkj</name>
				<comment />
				<x>490</x>
				<y>1390</y>
			</state>
			<state id="search">
				<name>search</name>
				<comment />
				<x>40</x>
				<y>40</y>
			</state>
			<state id="as">
				<name>as</name>
				<comment />
				<x>190</x>
				<y>40</y>
			</state>
			<state id="bs">
				<name>bs</name>
				<comment />
				<x>340</x>
				<y>40</y>
			</state>
			<state id="cs">
				<name>cs</name>
				<comment />
				<x>490</x>
				<y>40</y>
			</state>
			<state id="ds">
				<name>ds</name>
				<comment />
				<x>640</x>
				<y>40</y>
			</state>
			<state id="es">
				<name>es</name>
				<comment />
				<x>40</x>
				<y>190</y>
			</state>
			<state id="fs">
				<name>fs</name>
				<comment />
				<x>190</x>
				<y>190</y>
			</state>
			<state id="gs">
				<name>gs</name>
				<comment />
				<x>340</x>
				<y>190</y>
			</state>
			<state id="hs">
				<name>hs</name>
				<comment />
				<x>490</x>
				<y>190</y>
			</state>
			<state id="is">
				<name>is</name>
				<comment />
				<x>640</x>
				<y>190</y>
			</state>
			<state id="js">
				<name>js</name>
				<comment />
				<x>40</x>
				<y>340</y>
			</state>
			<state id="ks">
				<name>ks</name>
				<comment />
				<x>190</x>
				<y>340</y>
			</state>
			<state id="ls">
				<name>ls</name>
				<comment />
				<x>340</x>
				<y>340</y>
			</state>
			<state id="ms">
				<name>ms</name>
				<comment />
				<x>490</x>
				<y>340</y>
			</state>
			<state id="ns">
				<name>ns</name>
				<comment />
				<x>640</x>
				<y>340</y>
			</state>
			<state id="os">
				<name>os</name>
				<comment />
				<x>40</x>
				<y>490</y>
			</state>
			<state id="ps">
				<name>ps</name>
				<comment />
				<x>190</x>
				<y>490</y>
			</state>
			<state id="qs">
				<name>qs</name>
				<comment />
				<x>340</x>
				<y>490</y>
			</state>
			<state id="rs">
				<name>rs</name>
				<comment />
				<x>490</x>
				<y>490</y>
			</state>
			<state id="ss">
				<name>ss</name>
				<comment />
				<x>640</x>
				<y>490</y>
			</state>
			<state id="ts">
				<name>ts</name>
				<comment />
				<x>40</x>
				<y>640</y>
			</state>
			<state id="us">
				<name>us</name>
				<comment />
				<x>190</x>
				<y>640</y>
			</state>
			<state id="vs">
				<name>vs</name>
				<comment />
				<x>340</x>
				<y>640</y>
			</state>
			<state id="ws">
				<name>ws</name>
				<comment />
				<x>490</x>
				<y>640</y>
			</state>
			<state id="xs">
				<name>xs</name>
				<comment />
				<x>640</x>
				<y>640</y>
			</state>
			<state id="ys">
				<name>ys</name>
				<comment />
				<x>40</x>
				<y>790</y>
			</state>
			<state id="zs">
				<name>zs</name>
				<comment />
				<x>190</x>
				<y>790</y>
			</state>
			<state id="aok">
				<name>aok</name>
				<comment />
				<x>340</x>
				<y>790</y>
			</state>
			<state id="cislo">
				<name>cislo</name>
				<comment />
				<x>40</x>
				<y>40</y>
			</state>
			<state id="1c">
				<name>1c</name>
				<comment />
				<x>190</x>
				<y>40</y>
			</state>
			<state id="2c">
				<name>2c</name>
				<comment />
				<x>340</x>
				<y>40</y>
			</state>
			<state id="off">
				<name>off</name>
				<comment />
				<x>490</x>
				<y>40</y>
			</state>
		</states>
		<transitions>
			<transition>
				<from>q0</from>
				<to>q0</to>
				<read>X</read>
				<write>X</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>q0</from>
				<to>z1</to>
				<read>Blank</read>
				<write>#</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>z1</from>
				<to>z2</to>
				<read>Blank</read>
				<write>6</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>z2</from>
				<to>z3</to>
				<read>Blank</read>
				<write>2</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>z3</from>
				<to>z4</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>z4</from>
				<to>z5</to>
				<read>Blank</read>
				<write>z</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>z5</from>
				<to>y1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>y1</from>
				<to>y2</to>
				<read>Blank</read>
				<write>5</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>y2</from>
				<to>y3</to>
				<read>Blank</read>
				<write>2</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>y3</from>
				<to>y4</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>y4</from>
				<to>y5</to>
				<read>Blank</read>
				<write>y</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>y5</from>
				<to>x1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>x1</from>
				<to>x2</to>
				<read>Blank</read>
				<write>4</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>x2</from>
				<to>x3</to>
				<read>Blank</read>
				<write>2</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>x3</from>
				<to>x4</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>x4</from>
				<to>x5</to>
				<read>Blank</read>
				<write>x</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>x5</from>
				<to>w1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>w1</from>
				<to>w2</to>
				<read>Blank</read>
				<write>3</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>w2</from>
				<to>w3</to>
				<read>Blank</read>
				<write>2</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>w3</from>
				<to>w4</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>w4</from>
				<to>w5</to>
				<read>Blank</read>
				<write>w</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>w5</from>
				<to>v1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>v1</from>
				<to>v2</to>
				<read>Blank</read>
				<write>2</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>v2</from>
				<to>v3</to>
				<read>Blank</read>
				<write>2</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>v3</from>
				<to>v4</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>v4</from>
				<to>v5</to>
				<read>Blank</read>
				<write>v</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>v5</from>
				<to>u1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>u1</from>
				<to>u2</to>
				<read>Blank</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>u2</from>
				<to>u3</to>
				<read>Blank</read>
				<write>2</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>u3</from>
				<to>u4</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>u4</from>
				<to>u5</to>
				<read>Blank</read>
				<write>u</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>u5</from>
				<to>t1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>t1</from>
				<to>t2</to>
				<read>Blank</read>
				<write>0</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>t2</from>
				<to>t3</to>
				<read>Blank</read>
				<write>2</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>t3</from>
				<to>t4</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>t4</from>
				<to>t5</to>
				<read>Blank</read>
				<write>t</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>t5</from>
				<to>s1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>s1</from>
				<to>s2</to>
				<read>Blank</read>
				<write>9</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>s2</from>
				<to>s3</to>
				<read>Blank</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>s3</from>
				<to>s4</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>s4</from>
				<to>s5</to>
				<read>Blank</read>
				<write>s</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>s5</from>
				<to>r1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>r1</from>
				<to>r2</to>
				<read>Blank</read>
				<write>8</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>r2</from>
				<to>r3</to>
				<read>Blank</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>r3</from>
				<to>r4</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>r4</from>
				<to>r5</to>
				<read>Blank</read>
				<write>r</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>r5</from>
				<to>q1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>q1</from>
				<to>q2</to>
				<read>Blank</read>
				<write>7</write>
				<move>Left</move>
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
				<to>q4</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>q4</from>
				<to>q5</to>
				<read>Blank</read>
				<write>q</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>q5</from>
				<to>p1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>p1</from>
				<to>p2</to>
				<read>Blank</read>
				<write>6</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>p2</from>
				<to>p3</to>
				<read>Blank</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>p3</from>
				<to>p4</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>p4</from>
				<to>p5</to>
				<read>Blank</read>
				<write>p</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>p5</from>
				<to>o1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>o1</from>
				<to>o2</to>
				<read>Blank</read>
				<write>5</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>o2</from>
				<to>o3</to>
				<read>Blank</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>o3</from>
				<to>o4</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>o4</from>
				<to>o5</to>
				<read>Blank</read>
				<write>o</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>o5</from>
				<to>n1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>n1</from>
				<to>n2</to>
				<read>Blank</read>
				<write>4</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>n2</from>
				<to>n3</to>
				<read>Blank</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>n3</from>
				<to>n4</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>n4</from>
				<to>n5</to>
				<read>Blank</read>
				<write>n</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>n5</from>
				<to>m1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>m1</from>
				<to>m2</to>
				<read>Blank</read>
				<write>3</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>m2</from>
				<to>m3</to>
				<read>Blank</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>m3</from>
				<to>m4</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>m4</from>
				<to>m5</to>
				<read>Blank</read>
				<write>m</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>m5</from>
				<to>l1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>l1</from>
				<to>l2</to>
				<read>Blank</read>
				<write>2</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>l2</from>
				<to>l3</to>
				<read>Blank</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>l3</from>
				<to>l4</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>l4</from>
				<to>l5</to>
				<read>Blank</read>
				<write>l</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>l5</from>
				<to>k1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>k1</from>
				<to>k2</to>
				<read>Blank</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>k2</from>
				<to>k3</to>
				<read>Blank</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>k3</from>
				<to>k4</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>k4</from>
				<to>k5</to>
				<read>Blank</read>
				<write>k</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>k5</from>
				<to>j1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>j1</from>
				<to>j2</to>
				<read>Blank</read>
				<write>0</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>j2</from>
				<to>j3</to>
				<read>Blank</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>j3</from>
				<to>j4</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>j4</from>
				<to>j5</to>
				<read>Blank</read>
				<write>j</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>j5</from>
				<to>i1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>i1</from>
				<to>i2</to>
				<read>Blank</read>
				<write>9</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>i2</from>
				<to>i3</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>i3</from>
				<to>i4</to>
				<read>Blank</read>
				<write>i</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>i4</from>
				<to>h1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>h1</from>
				<to>h2</to>
				<read>Blank</read>
				<write>8</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>h2</from>
				<to>h3</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>h3</from>
				<to>h4</to>
				<read>Blank</read>
				<write>h</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>h4</from>
				<to>g1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>g1</from>
				<to>g2</to>
				<read>Blank</read>
				<write>7</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>g2</from>
				<to>g3</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>g3</from>
				<to>g4</to>
				<read>Blank</read>
				<write>g</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>g4</from>
				<to>f1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>f1</from>
				<to>f2</to>
				<read>Blank</read>
				<write>6</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>f2</from>
				<to>f3</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>f3</from>
				<to>f4</to>
				<read>Blank</read>
				<write>f</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>f4</from>
				<to>e1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>e1</from>
				<to>e2</to>
				<read>Blank</read>
				<write>5</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>e2</from>
				<to>e3</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>e3</from>
				<to>e4</to>
				<read>Blank</read>
				<write>e</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>e4</from>
				<to>d1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>d1</from>
				<to>d2</to>
				<read>Blank</read>
				<write>4</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>d2</from>
				<to>d3</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>d3</from>
				<to>d4</to>
				<read>Blank</read>
				<write>d</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>d4</from>
				<to>c1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>c1</from>
				<to>c2</to>
				<read>Blank</read>
				<write>3</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>c2</from>
				<to>c3</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>c3</from>
				<to>c4</to>
				<read>Blank</read>
				<write>c</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>c4</from>
				<to>b1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>b1</from>
				<to>b2</to>
				<read>Blank</read>
				<write>2</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>b2</from>
				<to>b3</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>b3</from>
				<to>b4</to>
				<read>Blank</read>
				<write>b</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>b4</from>
				<to>a1</to>
				<read>Blank</read>
				<write>^</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>a1</from>
				<to>a2</to>
				<read>Blank</read>
				<write>1</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>a1</from>
				<to>a2</to>
				<read>X</read>
				<write>X</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>a2</from>
				<to>a3</to>
				<read>Blank</read>
				<write>*</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>a2</from>
				<to>cislo</to>
				<read>*</read>
				<write>*</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>a3</from>
				<to>Start</to>
				<read>Blank</read>
				<write>a</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>Start</from>
				<to>search</to>
				<read>#</read>
				<write>#</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>Start</from>
				<to>Start</to>
				<read>X</read>
				<write>X</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>a1</to>
				<read>a</read>
				<write>a</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>bs</to>
				<read>b</read>
				<write>b</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>cs</to>
				<read>c</read>
				<write>c</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>ds</to>
				<read>d</read>
				<write>d</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>es</to>
				<read>e</read>
				<write>e</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>fs</to>
				<read>f</read>
				<write>f</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>gs</to>
				<read>g</read>
				<write>g</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>hs</to>
				<read>h</read>
				<write>h</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>is</to>
				<read>i</read>
				<write>i</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>js</to>
				<read>j</read>
				<write>j</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>ks</to>
				<read>k</read>
				<write>k</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>ls</to>
				<read>l</read>
				<write>l</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>ms</to>
				<read>m</read>
				<write>m</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>ns</to>
				<read>n</read>
				<write>n</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>os</to>
				<read>o</read>
				<write>o</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>ps</to>
				<read>p</read>
				<write>p</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>qs</to>
				<read>q</read>
				<write>q</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>rs</to>
				<read>r</read>
				<write>r</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>ss</to>
				<read>s</read>
				<write>s</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>ts</to>
				<read>t</read>
				<write>t</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>us</to>
				<read>u</read>
				<write>u</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>vs</to>
				<read>v</read>
				<write>v</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>ws</to>
				<read>w</read>
				<write>w</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>xs</to>
				<read>x</read>
				<write>x</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>ys</to>
				<read>y</read>
				<write>y</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>search</from>
				<to>zs</to>
				<read>z</read>
				<write>z</write>
				<move>Left</move>
				<comment />
			</transition>
			<transition>
				<from>cislo</from>
				<to>1c</to>
				<read>1</read>
				<write>1</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>cislo</from>
				<to>2c</to>
				<read>2</read>
				<write>2</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>2c</from>
				<to>2c</to>
				<read>X</read>
				<write>X</write>
				<move>Right</move>
				<comment />
			</transition>
			<transition>
				<from>2c</from>
				<to>off</to>
				<read>Blank</read>
				<write>2</write>
				<move>Left</move>
				<comment />
			</transition>
		</transitions>
		<code>// Кодирование входного текста мнимым шифром и запись разницы в длине
// a=1 b=2 c=3 d=4 e=5 f=6 g=7 h=8 i=9 j=10 k=11 l=12 m=13 n=14 o=15 
// p=16 q=17 r=18 s=19 t=20 v=21 w=22 x=23 y=24 z=25 
X={a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, ^, #, *, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0}

// a*1^b*2^c*3^d*4^e*5^f*6^g*7^h*8^i*9^j*10^k*11^l*12^m*13^n*14^o*15^
// p*16^q*17^r*18^s*19^t*20^u*21^v*22^w*23^x*24^y*25^z*26
f(q0, X)=(q0, X, L)
f(q0, Blank)=(z1, #, L)

f(z1, Blank)=(z2, 6, L)
f(z2, Blank)=(z3, 2, L)
f(z3, Blank)=(z4, *, L)
f(z4, Blank)=(z5, z, L)
f(z5, Blank)=(y1, ^, L)

f(y1, Blank)=(y2, 5, L)
f(y2, Blank)=(y3, 2, L)
f(y3, Blank)=(y4, *, L)
f(y4, Blank)=(y5, y, L)
f(y5, Blank)=(x1, ^, L)

f(x1, Blank)=(x2, 4, L)
f(x2, Blank)=(x3, 2, L)
f(x3, Blank)=(x4, *, L)
f(x4, Blank)=(x5, x, L)
f(x5, Blank)=(w1, ^, L)

f(w1, Blank)=(w2, 3, L)
f(w2, Blank)=(w3, 2, L)
f(w3, Blank)=(w4, *, L)
f(w4, Blank)=(w5, w, L)
f(w5, Blank)=(v1, ^, L)

f(v1, Blank)=(v2, 2, L)
f(v2, Blank)=(v3, 2, L)
f(v3, Blank)=(v4, *, L)
f(v4, Blank)=(v5, v, L)
f(v5, Blank)=(u1, ^, L)

f(u1, Blank)=(u2, 1, L)
f(u2, Blank)=(u3, 2, L)
f(u3, Blank)=(u4, *, L)
f(u4, Blank)=(u5, u, L)
f(u5, Blank)=(t1, ^, L)

f(t1, Blank)=(t2, 0, L)
f(t2, Blank)=(t3, 2, L)
f(t3, Blank)=(t4, *, L)
f(t4, Blank)=(t5, t, L)
f(t5, Blank)=(s1, ^, L)

f(s1, Blank)=(s2, 9, L)
f(s2, Blank)=(s3, 1, L)
f(s3, Blank)=(s4, *, L)
f(s4, Blank)=(s5, s, L)
f(s5, Blank)=(r1, ^, L)

f(r1, Blank)=(r2, 8, L)
f(r2, Blank)=(r3, 1, L)
f(r3, Blank)=(r4, *, L)
f(r4, Blank)=(r5, r, L)
f(r5, Blank)=(q1, ^, L)

f(q1, Blank)=(q2, 7, L)
f(q2, Blank)=(q3, 1, L)
f(q3, Blank)=(q4, *, L)
f(q4, Blank)=(q5, q, L)
f(q5, Blank)=(p1, ^, L)

f(p1, Blank)=(p2, 6, L)
f(p2, Blank)=(p3, 1, L)
f(p3, Blank)=(p4, *, L)
f(p4, Blank)=(p5, p, L)
f(p5, Blank)=(o1, ^, L)

f(o1, Blank)=(o2, 5, L)
f(o2, Blank)=(o3, 1, L)
f(o3, Blank)=(o4, *, L)
f(o4, Blank)=(o5, o, L)
f(o5, Blank)=(n1, ^, L)

f(n1, Blank)=(n2, 4, L)
f(n2, Blank)=(n3, 1, L)
f(n3, Blank)=(n4, *, L)
f(n4, Blank)=(n5, n, L)
f(n5, Blank)=(m1, ^, L)

f(m1, Blank)=(m2, 3, L)
f(m2, Blank)=(m3, 1, L)
f(m3, Blank)=(m4, *, L)
f(m4, Blank)=(m5, m, L)
f(m5, Blank)=(l1, ^, L)

f(l1, Blank)=(l2, 2, L)
f(l2, Blank)=(l3, 1, L)
f(l3, Blank)=(l4, *, L)
f(l4, Blank)=(l5, l, L)
f(l5, Blank)=(k1, ^, L)

f(k1, Blank)=(k2, 1, L)
f(k2, Blank)=(k3, 1, L)
f(k3, Blank)=(k4, *, L)
f(k4, Blank)=(k5, k, L)
f(k5, Blank)=(j1, ^, L)

f(j1, Blank)=(j2, 0, L)
f(j2, Blank)=(j3, 1, L)
f(j3, Blank)=(j4, *, L)
f(j4, Blank)=(j5, j, L)
f(j5, Blank)=(i1, ^, L)

f(i1, Blank)=(i2, 9, L)
f(i2, Blank)=(i3, *, L)
f(i3, Blank)=(i4, i, L)
f(i4, Blank)=(h1, ^, L)

f(h1, Blank)=(h2, 8, L)
f(h2, Blank)=(h3, *, L)
f(h3, Blank)=(h4, h, L)
f(h4, Blank)=(g1, ^, L)

f(g1, Blank)=(g2, 7, L)
f(g2, Blank)=(g3, *, L)
f(g3, Blank)=(g4, g, L)
f(g4, Blank)=(f1, ^, L)

f(f1, Blank)=(f2, 6, L)
f(f2, Blank)=(f3, *, L)
f(f3, Blank)=(f4, f, L)
f(f4, Blank)=(e1, ^, L)

f(e1, Blank)=(e2, 5, L)
f(e2, Blank)=(e3, *, L)
f(e3, Blank)=(e4, e, L)
f(e4, Blank)=(d1, ^, L)

f(d1, Blank)=(d2, 4, L)
f(d2, Blank)=(d3, *, L)
f(d3, Blank)=(d4, d, L)
f(d4, Blank)=(c1, ^, L)

f(c1, Blank)=(c2, 3, L)
f(c2, Blank)=(c3, *, L)
f(c3, Blank)=(c4, c, L)
f(c4, Blank)=(b1, ^, L)

f(b1, Blank)=(b2, 2, L)
f(b2, Blank)=(b3, *, L)
f(b3, Blank)=(b4, b, L)
f(b4, Blank)=(a1, ^, L)

f(a1, Blank)=(a2, 1, L)
f(a1, X)=(a2, X, R)
f(a2, Blank)=(a3, *, L)
f(a2, *)=(cislo, *, R)
f(a3, Blank)=(Start, a, R)

f(Start, #)=(search, #, R)
f(Start, X)=(Start, X, R)

f(search, a)=(a1, a, L)
f(search, b)=(bs, b, L)
f(search, c)=(cs, c, L)
f(search, d)=(ds, d, L)
f(search, e)=(es, e, L)
f(search, f)=(fs, f, L)
f(search, g)=(gs, g, L)
f(search, h)=(hs, h, L)
f(search, i)=(is, i, L)
f(search, j)=(js, j, L)
f(search, k)=(ks, k, L)
f(search, l)=(ls, l, L)
f(search, m)=(ms, m, L)
f(search, n)=(ns, n, L)
f(search, o)=(os, o, L)
f(search, p)=(ps, p, L)
f(search, q)=(qs, q, L)
f(search, r)=(rs, r, L)
f(search, s)=(ss, s, L)
f(search, t)=(ts, t, L)
f(search, u)=(us, u, L)
f(search, v)=(vs, v, L)
f(search, w)=(ws, w, L)
f(search, x)=(xs, x, L)
f(search, y)=(ys, y, L)
f(search, z)=(zs, z, L)

f(cislo, 1)=(1c, 1, R)
f(cislo, 2)=(2c, 2, R)

f(2c, X)=(2c, X, R)
f(2c, Blank)=(off, 2, L)</code>
	</machine>
</turingmachine>