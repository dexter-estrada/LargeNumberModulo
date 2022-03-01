#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * This calculates the remainder of a very large number (
 * when dividing it with another number.
 * In the form of Remainder = Base^(Exponent) mod divisor
 * Created by Dexter Estrada (dexter.estrada99@gmail.com)
 */

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Enter exactly 3 arguments as \"b exponent d\" i.exponent. \"2 4 3\"");
        return 2;
    }
    // User defined variables
    double base = atoi(argv[1]);
    double exponent = atoi(argv[2]);
    int divisor = atoi(argv[3]);

    unsigned long dividend = pow(base, exponent);
    int remainder = dividend % divisor;
    printf("%d\n", remainder);
    return 0;
}
