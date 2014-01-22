"mr %[c], %%r5\n" // Copy %%r5 into (c)
        : [c] "+r" (c) // output operand list
        : [a] "r" (a), [b] "r" (b), [n] "r" (n) // input operand list
        : "memory", "r3", "r4", "r5", "r6", "r7", "r8", "r9", "r10" // clobber list
        );

    printf("%d\n", c);
    return 0;
}
