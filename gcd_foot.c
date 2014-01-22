"mr %[a], %%r3\n" // Copy %%r3 into (a)
        : [a] "+r" (a)
        : [b] "r" (b)
        );
    printf("%d\n", a);
    return 0;
}
