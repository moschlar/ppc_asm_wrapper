"mr %0, %%r3\n" // Copy %%r3 into (a)
        : "+r" (a)
        : "r" (b)
        );
    printf("%d\n", a);
    return 0;
}