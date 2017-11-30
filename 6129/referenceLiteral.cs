using System;

class ReferenceLiteral {

	static void Literal(ref int x) {
		x += 1;
	}

	static void Main() {
		int val = 1;
		Console.WriteLine("val is originally " + val);
		Literal(ref val);
		Console.WriteLine("val is now " + val + " after being updated via pass by reference");
	}

}
