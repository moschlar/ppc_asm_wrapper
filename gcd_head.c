#include <stdio.h>

int main(int argc, char* argv[]) {
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    __asm__(
"mr %%r3, %0\n" // Copy (a) into %%r3
"mr %%r4, %1\n" // Copy (b) into %%r4
