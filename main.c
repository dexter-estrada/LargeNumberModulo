#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * This calculates the remainder of a very large number
 * when dividing it with another number.
 * Used when encrypting M
 * Created by Dexter Estrada (dexter.estrada99@gmail.com)
 */

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Enter exactly 3 arguments as \"M N e\"");
        return 2;
    }
    // User defined variables
    double M = atoi(argv[1]);
    int N = atoi(argv[2]);
    double e = atoi(argv[3]);

    unsigned long dividend = pow(M, e);
    int remainder = dividend % N;

    printf("%d", remainder);

    return 0;
}
