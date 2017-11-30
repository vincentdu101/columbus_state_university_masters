#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

typedef struct {
	double real;
	double imag;
} ComplexNumber;

ComplexNumber add(ComplexNumber, ComplexNumber);
ComplexNumber subtract(ComplexNumber, ComplexNumber);
ComplexNumber multiply(ComplexNumber, ComplexNumber);
ComplexNumber divide(ComplexNumber, ComplexNumber);
double getRealNumber(ComplexNumber);
double getImaginaryNumber(ComplexNumber);
ComplexNumber formComplexNumber(double, double);
string print(ComplexNumber);
string printRealNumber(ComplexNumber);
string printImaginaryNumber(ComplexNumber);

ComplexNumber add(ComplexNumber first, ComplexNumber second) {
	ComplexNumber temp;
	temp.real = first.real + second.real;
	temp.imag = first.imag + second.imag;
	return temp;
}

ComplexNumber subtract(ComplexNumber first, ComplexNumber second) {
	ComplexNumber temp;
	temp.real = first.real - second.real;
	temp.imag = first.imag - second.imag;
	return temp;
}

ComplexNumber multiply(ComplexNumber first, ComplexNumber second) {
	ComplexNumber temp;
	temp.real = first.real * second.real;
	temp.imag = first.imag * second.imag;
	return temp;
}

ComplexNumber divide(ComplexNumber first, ComplexNumber second) {
	ComplexNumber temp;
	temp.real = first.real / second.real;
	temp.imag = first.imag / second.imag;
	return temp;
}

string printRealNumber(ComplexNumber complex) {
	return "Real Number is " + to_string((int)complex.real) + "\n";
}

string printImaginaryNumber(ComplexNumber complex) {
	return "Imaginary Number is " + to_string((int)complex.imag) + "i\n";
}

ComplexNumber formComplexNumber(double real, double imag) {
	ComplexNumber temp;
	temp.real = real;
	temp.imag = imag;
	return temp;
}

string print(ComplexNumber complex) {
	return to_string((int)complex.real) + " + " + to_string((int)complex.imag) + "i\n";
}	


int main(void) {

	ComplexNumber first = formComplexNumber(4.0, 6.0);
	ComplexNumber second = formComplexNumber(3.0, 3.0);

	cout << "(4 + 6i) + (3 + 3i) = " + print(add(first, second));
	cout << "(4 + 6i) - (3 + 3i) = " + print(subtract(first, second));
	cout << "(4 + 6i) * (3 + 3i) = " + print(multiply(first, second));
	cout << "(4 + 6i) / (3 + 3i) = " + print(divide(first, second));

	cout << "For 4 + 6i\n";
	cout << printRealNumber(first);
	cout << printImaginaryNumber(first);

	return 0;
}