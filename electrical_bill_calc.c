/*
Name:Denis Macharia Nguru
Reg No:CT100/G/26250/25
Distance calculations
*/
#include <stdio.h>

// Function to calculate fare
int calculateFare(int distance) {
    int rate = 50; // Fare rate per kilometer
    int totalFare = distance * rate;
    return totalFare;
}

// Example usage
int main() {
    int distance;
    printf("Enter distance traveled (in km): ");
    scanf("%d", &distance);

    int fare = calculateFare(distance);
    printf("Total fare: KSh. %d\n", fare);

    return 0;
}
