//Question: Get a Two-digit number from user and print the digit in “tenes” 
//position
//Example: User Enters “78”
//Answer - 7
#include<stdio.h>
int main ()
{
int x, y;
printf ("Enter a TWO-digit Number: ");
scanf ("%d", &x);
// your program here
y=x/10;
printf("The digit in tenes position is %d\n",y);
}