#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Prompt the user to enter two numbers
    printf("Enter two integers: ");

    // Read the two integers from the user and store them in num1 and num2
    scanf("%d %d", &num1, &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Print the result
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    return 0; // Indicate successful program execution
}
