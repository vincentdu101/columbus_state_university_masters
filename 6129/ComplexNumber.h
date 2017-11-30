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
void print(ComplexNumber);