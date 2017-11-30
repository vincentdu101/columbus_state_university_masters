#include "ComplexNumber.h";
#include <iostream>
#include <string>
using namespace std;

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

double getRealNumber(ComplexNumber complex) {
	return complex.real;
}

double getImaginaryNumber(ComplexNumber complex) {
	return complex.imag;
}

ComplexNumber formComplexNumber(double real, double imag) {
	ComplexNumber temp;
	temp.real = real;
	temp.imag = imag;
	return temp;
}

void print(ComplexNumber complex) {
	cout << (char)complex.real + ' + ' + (char)complex.imag + 'i';
}	