#include <stdio.h>
#include <iostream>
using namespace std;

int a, b;

int fun() {
	return a += 10;
}

int main(void) {
	a = 10;
	b = a + fun();
	printf("With the function call on the right, ");
	printf(" b is: %d\n", b);
	a = 10;
	b = fun() + a;
	printf("With the function call on the left, ");
	printf(" b is: %d\n", b);
	return (0);
}