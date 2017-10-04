#include <stdio.h>

int main() {

    for (int i = 0; i < 5; i++) {
        printf("Scope of for block i is visible here and its value is %i", i);
    }

    printf("Error occurs because i is no longer in scope %i", i);

    return 0;
}