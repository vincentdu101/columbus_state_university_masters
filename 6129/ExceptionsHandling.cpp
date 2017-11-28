#include<stdio.h>

class ExceptionHandling {

    int i;
    float f;
    bool b;

    int main() {
        try {
            alt1();
        } catch(i) {
            alt2();
        } catch(f) {
            alt3();
        } catch(b) {
            // handle third alternative here
        }
    }

    void alt1() {
        // handle first exception
        throw i;
    }

    void alt2() {
        // handle second exception
        throw f;
    }

    void alt3() {
        // handle third exception
        throw b;
    }

}