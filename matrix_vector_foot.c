        : // output operand list
        : [a] "r" (a), [b] "r" (b), [c] "r" (c) // input operand list
        : "cc", "memory", "r3", "r4", "r5", "r6", "r7", "r8", "r9" // clobber list
    );

    for (i=0; i < N; ++i) {
        printf("%lf\n", c[i]);
    }
    return 0;
}
