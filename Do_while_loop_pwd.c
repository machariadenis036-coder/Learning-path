//Simple c program
/*
Name:Denis Macharia Nguru
Reg:CT100/G/26250/25
Do while loop
*/

#include <stdio.h>
#include <string.h>

int main() {
    char password[20]; // to store user input

    do {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, "1234") != 0) {
            printf("Incorrect password! Try again.\n");
        }

    } while (strcmp(password, "1234") != 0);

    printf("Access Granted.\n");

    return 0;
}
