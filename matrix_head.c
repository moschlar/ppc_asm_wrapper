#include <stdio.h>
#include <stdlib.h>

#define N 3

int main(int argc, char* argv[]) {
    int i = 0;

    double *a, *b, *c;
    a = (double *) malloc(sizeof(double)*N*N);
    b = (double *) malloc(sizeof(double)*N*N);
    c = (double *) malloc(sizeof(double)*N*N);

    for (i=0; i < N*N; ++i) {
        scanf("%lf", &a[i]);
    }
    for (i=0; i < N*N; ++i) {
        scanf("%lf", &b[i]);
    }
    for (i=0; i < N*N; ++i) {
        c[i] = 0.0;
    }

    __asm__ __volatile__(
"mr %%r3, %[a]\n" // Copy (a) into %%r3
"mr %%r4, %[b]\n" // Copy (b) into %%r4
"mr %%r5, %[c]\n" // Copy (c) into %%r5
