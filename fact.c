#include <stdio.h>

factorial() {
    int n;
    unsigned long long factorial = 1;

    // Input the number
    printf("\n\nEnter a positive integer: ");
    scanf("%d", &n);

    // Ensure the number is non-negative
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }

        // Output the factorial
        printf("Factorial of %d = %llu\n\n", n, factorial);
    }

   // return 0;
}

