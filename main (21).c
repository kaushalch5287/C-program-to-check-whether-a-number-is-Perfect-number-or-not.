/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int i, num, sum = 0;
 printf("Enter any number to check perfect number: ");
 scanf("%d", &num);
 for(i = 1; i <= num / 2; i++)
 {
 if(num%i == 0)
 {
 sum += i;
 }
 }
 if(sum == num)
 {
 printf("%d is PERFECT NUMBER", num);
 }
 else
 {
 printf("%d is NOT PERFECT NUMBER", num);
 }
return 0;
}