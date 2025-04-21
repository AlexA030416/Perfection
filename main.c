#include <stdio.h>

// Function to determine if a number is a perfect number
int isPerfectNumber(int number) {
    int sum = 0;

    // Sum all divisors of the number excluding itself
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    // Compare the sum of divisors to the number
    return sum == number;
}

int main() {
    int number;

    // Prompt the user for input
    printf("Enter a number between 1 and 10,000 to check if it's a perfect number: ");
    scanf("%d", &number);

    // Validate the input range
    if (number < 1 || number > 10000) {
        printf("Invalid input! Please enter a number between 1 and 10,000.\n");
        return 1; // Exit the program with an error code
    }

    // Check if the number is a perfect number
    if (isPerfectNumber(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}
