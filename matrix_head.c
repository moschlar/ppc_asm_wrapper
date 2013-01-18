#include <stdio.h>
#include <stdlib.h>

#define N 3

int main(int argc, char* argv[]) {
	int i;

    int *a, *b, *c;
    a = (int *) malloc(sizeof(int)*N*N);
    b = (int *) malloc(sizeof(int)*N*N);
    c = (int *) malloc(sizeof(int)*N*N);

    for (i=0; i < N*N; ++i) {
    	scanf("%d", &a[i]);
    }
    for (i=0; i < N*N; ++i) {
    	scanf("%d", &b[i]);
    }

    __asm__(
"mr %%r3, %0\n" // Copy (*a) into %%r3
"mr %%r4, %1\n" // Copy (*b) into %%r4
"mr %%r5, %2\n" // Copy (*c) into %%r5
