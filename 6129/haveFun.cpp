#include <stdio.h>
#include <iostream>
using namespace std;

int fun(int *k) {
	*k += 4;
	return 3 * (*k) - 1;
}

int main() {
	int i = 10, j = 10, sum1, sum2;
	sum1 = (i / 2) + fun(&i);
	sum2 = fun(&j) + (j / 2);
	printf("sum1 + sum2 = %i", sum1 + sum2);
    printf("\n");
	return -1;
}