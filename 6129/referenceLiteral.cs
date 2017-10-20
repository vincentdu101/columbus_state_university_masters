using System;

class ReferenceLiteral {

	static void Literal(ref int x) {
		x += 1;
	}

	static void Main() {
		int val = 1;
		Literal(ref val);
		Console.WriteLine(val);
	}

}