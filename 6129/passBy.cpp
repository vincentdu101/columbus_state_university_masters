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
	passByReference(y);
	printf("y = %i\n", y);

	int z = 1;
	passByValueResult(z);
	printf("z = %i\n", z);

	return -1;
}