#include <stdio.h>
#include <iostream>
using namespace std;

int main(void) {

    int k = 0;
    int j = 0;

    if ((k == 1) || (k == 2)) {
        j = 2 * k - 1;
    } else if ((k == 3) || (k == 5)) {
        j = 3 * k + 1;
    } else if (k == 4) {
        j = 4 * k - 1;
    } else if ((k == 6) || (k == 7) || (k == 8)) {
        j = k - 2;
    }

    printf("j is %i", j);
    printf("\n");

    return (0);
}