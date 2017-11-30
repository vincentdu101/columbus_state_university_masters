using System;
using System.Text.RegularExpressions;

class ComplexNumber {

    // The pattern has been broken down for educational purposes
    private static string regexPattern = @"([-+]?\d+\.?\d*|[-+]?\d*\.?\d+)" + @"\s*" + @"\+" + @"\s*" + @"([-+]?\d+\.?\d*|[-+]?\d*\.?\d+)" + @"i";
    private static Regex regex = new Regex(regexPattern);

	private static int extractComplexNumber(string complex) {
		Match match = regex.Match(complex);
		return int.Parse(match.Groups[2].Value);
	}

	private static int extractRegularNumber(string complex) {
		Match match = regex.Match(complex);
        return int.Parse(match.Groups[1].Value);
	} 

	public static string addition(string firstComplex, string secondComplex) {
		int firstComplexNum = extractComplexNumber(firstComplex);
		int secondComplexNum = extractComplexNumber(secondComplex);
		int firstRegNum = extractRegularNumber(firstComplex);
		int secondRegNum = extractRegularNumber(secondComplex);
		string totalRegNum = (firstRegNum + secondRegNum).ToString();
		string totalComplexNum = (firstComplexNum + secondComplexNum) + "i";
		return totalRegNum + " + " + totalComplexNum;
	}

	public static string subtraction(string firstComplex, string secondComplex) {
		int firstComplexNum = extractComplexNumber(firstComplex);
		int secondComplexNum = extractComplexNumber(secondComplex);
		int firstRegNum = extractRegularNumber(firstComplex);
		int secondRegNum = extractRegularNumber(secondComplex);
		string totalRegNum = (firstRegNum - secondRegNum).ToString();
		string totalComplexNum = (firstComplexNum - secondComplexNum) + "i";
		return totalRegNum + (totalComplexNum == "0i" ? "" : " + " + totalComplexNum);
	}

	public static string multiplication(string firstComplex, string secondComplex) {
		int firstComplexNum = extractComplexNumber(firstComplex);
		int secondComplexNum = extractComplexNumber(secondComplex);
		int firstRegNum = extractRegularNumber(firstComplex);
		int secondRegNum = extractRegularNumber(secondComplex);
		string totalRegNum = (firstRegNum * secondRegNum).ToString();
		string totalComplexNum = (firstComplexNum * secondComplexNum) + "i";
		return totalRegNum + (totalComplexNum == "0i" ? "" : " + " + totalComplexNum);
	}

		public static string division(string firstComplex, string secondComplex) {
		int firstComplexNum = extractComplexNumber(firstComplex);
		int secondComplexNum = extractComplexNumber(secondComplex);
		int firstRegNum = extractRegularNumber(firstComplex);
		int secondRegNum = extractRegularNumber(secondComplex);
		string totalRegNum = (firstRegNum / secondRegNum).ToString();
		string totalComplexNum = (firstComplexNum / secondComplexNum) + "i";
		return totalRegNum + (totalComplexNum == "0i" ? "" : " + " + totalComplexNum);
	}

	static void Main() {
		Console.WriteLine(addition("1 + 3i", "6 + 3i"));
		Console.WriteLine(subtraction("1 + 3i", "6 + 3i"));
		Console.WriteLine(multiplication("1 + 3i", "6 + 3i"));
		Console.WriteLine(division("1 + 3i", "6 + 3i"));
	}

}