#include <stdio.h>

biggest2() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Compare the two numbers
    if (num1 > num2) {
        printf("The bigger number is: %d\n", num1);
    } else if (num2 > num1) {
        printf("The bigger number is: %d\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    //return 0;
}
