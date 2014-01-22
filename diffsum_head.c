#include <stdio.h>
#include <stdlib.h>

#define N 8

int main(int argc, char* argv[]) {
	int i = 0, n = N;
    int *a, *b;
    int c = 0;

    a = (int *) malloc(sizeof(int)*N);
    b = (int *) malloc(sizeof(int)*N);

    for (i=0; i < N; ++i) {
    	scanf("%d", &a[i]);
    }
    for (i=0; i < N; ++i) {
    	scanf("%d", &b[i]);
    }

	__asm__ __volatile__(
"mr %%r3, %[a]\n" // Copy (a) into %%r3
"mr %%r4, %[b]\n" // Copy (b) into %%r4
"mr %%r6, %[n]\n" // Copy (n) into %%r6
