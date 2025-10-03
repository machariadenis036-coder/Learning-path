//Simple c program 
/* 
Name:Denis Macharia Nguru 
Reg:CT100/G/26250/25 
Description:Eligibility 
*/ 
#include <stdio.h> 
int main() { 
float attendance, averageMarks; 
// Prompt the user for input 
printf("Enter attendance percentage: "); 
scanf("%f", &attendance); 
printf("Enter average marks: "); 
scanf("%f", &averageMarks); 
// Check eligibility 
if (attendance >= 75 && averageMarks >= 40) { 
printf("Eligible for final exams.\n"); 
} else { 
printf("Not eligible.\n"); 
} 
return 0; 
}