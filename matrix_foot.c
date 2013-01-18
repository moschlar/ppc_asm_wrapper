"mr %2, %%r5\n" // Copy %%r5 into (*c)
        : "+r" (*c)
        : "r" (a), "r" (b)
        : "memory"
        );
    for (i=0; i < N*N; ++i) {
    	printf("%d\n", c[i]);
    }
    return 0;
}