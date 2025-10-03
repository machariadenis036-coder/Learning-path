//Simple c program 
/* 
Name:Denis Macharia Nguru 
Reg:CT100/G/26250/25 
Description:data bundles 
*/ 
 
#include <stdio.h> 
 
int main() { 
    int choice; 
 
    // Display the menu 
    printf("Internet Data Bundles\n"); 
    printf("1. 100 MB  - KES 50\n"); 
    printf("2. 500 MB  - KES 200\n"); 
    printf("3. 1 GB    - KES 350\n"); 
    printf("4. 2 GB    - KES 600\n"); 
 
    // Prompt user input 
    printf("Enter your choice (1–4): "); 
    scanf("%d", &choice); 
 
    // Use switch statement 
    switch(choice) { 
        case 1: 
            printf("You selected 100 MB. Cost: KES 50\n"); 
            break; 
        case 2: 
            printf("You selected 500 MB. Cost: KES 200\n"); 
            break; 
        case 3: 
            printf("You selected 1 GB. Cost: KES 350\n"); 
            break; 
        case 4: 
            printf("You selected 2 GB. Cost: KES 600\n"); 
            break; 
        default: 
            printf("Invalid choice! Please select between 1 and 4.\n"); 
    } 
 
    return 0; 
}