//simple c program 
/* 
Name:Denis macharia nguru 
Reg:CT100/G/26250/25 
Description:Volume and surface area 
*/ 
#include <stdio.h> 
#define PI 3.14159    
int main() { 
double radius, height, volume, surface_area; 
// Prompt user for input 
printf("Enter the radius of the cylinder: "); 
scanf("%lf", &radius); 
printf("Enter the height of the cylinder: "); 
scanf("%lf", &height); 
// Calculate volume and surface area 
volume = PI * radius * radius * height; 
surface_area = (2 * PI * radius * height) + (2 * PI * radius * radius); 
// Display results 
printf("\nVolume of the cylinder = %.2lf", volume); 
printf("\nSurface area of the cylinder = %.2lf", surface_area); 
return 0;
}