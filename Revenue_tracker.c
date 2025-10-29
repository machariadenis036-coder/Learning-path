/*
Name:Denis Macharia
Reg:CT100/G/26250/25
Revenue
*/

#include <stdio.h>

int main() {
    float revenue[7];   // Array to store revenue for 7 days
    float total = 0.0, average;
    int i;

    // Input daily revenues
    printf("Enter the revenue for each day of the week:\n");
    for(i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];  // Add to total
    }

    // Calculate average
    average = total / 7;

    // Display results
    printf("\n----- Weekly Revenue Report -----\n");
    printf("Total weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;
}
