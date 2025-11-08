/*
Name:Denis Macharia
Reg No:CT100/G/26250/25
books
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char title[200];
    char choice;

    // Open the file in append mode to avoid deleting existing records
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("=== Library Book Borrowing System ===\n");

    do {
        printf("\nEnter the title of the borrowed book: ");
        // Clear input buffer and read a line including spaces
        fflush(stdin);
        fgets(title, sizeof(title), stdin);

        // Write the title to the file
        fprintf(file, "%s", title);
        printf("Book title successfully stored!\n");

        // Ask if the librarian wants to add another title
        printf("Do you want to add another book? (y/n): ");
        scanf(" %c", &choice);
        getchar(); // clear newline from input buffer

    } while (choice == 'y' || choice == 'Y');

    fclose(file);
    printf("\nAll book titles have been saved to borrowed_books.txt.\n");

    return 0;
}
