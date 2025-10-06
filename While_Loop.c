/*
Name:Denis Macharia Nguru
Reg:CT100/G/26250/25
While Loop
*/

#include <stdio.h>

int main() {
    float balance, withdraw;

    // Ask the user to enter their initial account balance
    printf("Enter your account balance: ");
    scanf("%f", &balance);

    // Continue withdrawals as long as balance is greater than 0
    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;  // Deduct withdrawal from balance

        printf("Remaining balance: %.2f\n", balance);

        if (balance <= 0) {
            printf("\nYour account balance is zero or negative.\n");
            printf("No further withdrawals allowed.\n");
        }
    }

    return 0;
}
