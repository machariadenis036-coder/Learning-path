//simple c program
/*
Name:Denis Macharia Nguru
Reg:CT100/G/26250/25
Description:Bill
*/

#include <stdio.h> 
 
int main() { 
    int units; 
    float bill; 
 
    // Prompt user input 
    printf("Enter water units consumed: "); 
    scanf("%d", &units); 
 
    // Bill calculation using if–else 
    if (units <= 30) { 
        bill = units * 20; 
    } 
    else if (units <= 60) { 
        bill = (30 * 20) + (units - 30) * 25; 
    } 
    else { 
        bill = (30 * 20) + (30 * 25) + (units - 60) * 30; 
    } 
 
    // Display result with two decimal places 
    printf("Total water bill: %.2f KES\n", bill); 
 
    return 0; 
}