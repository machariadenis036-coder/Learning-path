// simple c program
/*
Name:Denis Macharia Nguru
Reg:CT100/G/26250/25
Descriptrion:Bank Loan
*/

#include <stdio.h>

int main() {
    int age;
    float income;

    // Get user input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income (in Sh): ");
    scanf("%f", &income);

    // Check loan eligibility
    if (age >= 21 && income >= 21000) {
        printf("Congratulations! You qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}