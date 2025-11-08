/*
Name:Denis Macharia
Reg No:CT100/G/25
total sales
*/

#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    // Open the file for reading
    file = fopen("c:\\users\\Denis\\Desktop cfiles\\student.txt", "r");
    
    // Check if the file exists or opened successfully
    if (file == NULL) {
        printf("Error: Could not open file sales.txt\n");
        return 1;
    }

    // Read each transaction and sum up
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    // Display total sales
    printf("Total sales for the day: %.2f\n", total);

    // Close the file
    fclose(file);
    
    //read from file
    file = fopen("c:\\users\\Denis\\Desktop cfiles\\student.txt", "r");
    return 0;
}
