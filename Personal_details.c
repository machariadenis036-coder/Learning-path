//simple c program 
/* 
Name:Denis macharia nguru 
Reg:CT100/G/26250/25 
Description:Personal details 
*/ 
#include <stdio.h> 
int main() { 
float height, weight; 
long long phoneNumber;   
// Prompt user for input 
printf("Enter your height (in cm): "); 
scanf("%f", &height); 
printf("Enter your weight (in kg): "); 
scanf("%f", &weight); 
printf("Enter your phone number: "); 
scanf("%lld", &phoneNumber); 
// Display the entered details 
printf("\n--- Your Details ---\n"); 
printf("Height: %.2f cm\n", height); 
printf("Weight: %.2f kg\n", weight); 
printf("Phone Number: %lld\n", phoneNumber); 
return 0; 
}