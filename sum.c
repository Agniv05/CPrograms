#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Prompt user to enter the first number
    printf("Enter the first number: ");
    // Read and store the first number
    scanf("%d", &num1);

    // Prompt user to enter the second number
    printf("Enter the second number: ");
    // Read and store the second number
    scanf("%d", &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Print the sum
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}
