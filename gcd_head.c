#include <stdio.h>

int main(int argc, char* argv[]) {
    int a=0, b=0;
    scanf("%d", &a);
    scanf("%d", &b);

    __asm__ __volatile__(
"mr %%r3, %[a]\n" // Copy (a) into %%r3
"mr %%r4, %[b]\n" // Copy (b) into %%r4
