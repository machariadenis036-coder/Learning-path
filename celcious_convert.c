/*
Name:Denis Macharia Nguru
Reg No:CT100/G/26250/25
convertion of celcius into temperature
*/
#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    return celsius;
}

// Example usage
int main() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = convertToCelsius(f);
    printf("Temperature in Celsius: %.2f\n", c);

    return 0;
}