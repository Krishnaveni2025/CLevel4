//Question: Get a Three digit number from the user and print the sum of all digits.
//Example: User Enters “738” answer: 18
#include<stdio.h>
int main()
{
int x,y;
printf("Enter a THREE digit Number : ");
scanf("%d",&x);
// Your Program Here
y=(x/100)+((x%100)/10)+(x%10);
printf("The sum of the digits of entered number is %d\n",y);
}
