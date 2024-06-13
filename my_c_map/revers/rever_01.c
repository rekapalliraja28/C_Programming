#include <stdio.h>

int main() {

    int number, reversedNumber = 0, remainder;


    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &number);


    // Reverse the number
    while (number != 0)
    {
        remainder = number % 10; // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Append it to the reversed number
        number /= 10; // Remove the last digit from the original number
   
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}

