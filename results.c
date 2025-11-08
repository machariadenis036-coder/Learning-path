/*
Name:Denis Macharia
Reg No:CT100/G/26250/25
students results
*/

#include <stdio.h>
#include <stdlib.h>

// Define a structure to hold student information
struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student student;

    // Open the binary file for reading
     file = fopen("c:\\users\\Denis\\Desktop cfiles\\student.txt", "rb");
    if (file == NULL) {
        printf("Error: Cannot open file 'results.dat'\n");
        return 1;
    }

    printf("Student Examination Results:\n");
    printf("-----------------------------\n");

    // Read and display each record
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        printf("Name: %s\n", student.name);
        printf("Registration Number: %s\n", student.regNo);
        printf("Total Marks: %.2f\n", student.totalMarks);
        printf("-----------------------------\n");
    }

    fclose(file);
    
    //read from file
    file = fopen("c:\\users\\Denis\\Desktop cfiles\\student.txt", "rb");
    return 0;
}
