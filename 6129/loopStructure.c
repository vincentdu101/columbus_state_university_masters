#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

    int j = 0;
    int i = 0;
    int k = 0;

    k = (j + 13) / 27;

    while (k <= 10) {
        k = k + 1;
        i = 3 * k - 1;
    }

    printf("k is %i", k);
    printf("\n");

    return -1;
}