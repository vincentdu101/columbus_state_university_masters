#include <stdio.h>
#include <iostream>

void passByReference(int &a) {
	a += 1;
}

void passByValueResult(int &copy) {
	int x = copy;
	passByReference(x);
	copy = x;
}

int main() {
	int y = 1;
	printf("y is %i\n", y);
	passByReference(y);
	printf("after pass by reference y = %i\n", y);

	int z = 1;
	printf("z is %i\n", z);
	passByValueResult(z);
	printf("after pass by value-result z = %i\n", z);

	return -1;
}