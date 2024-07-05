//Question: Get a Two digit number from the user and print the sum of all digits.
//Example: User Enters “78”
#include<stdio.h>
int main()
{
int x,y;
printf("Enter a TWO digit Number : ");
scanf("%d",&x);
// Your Program Here
y=(x/10)+(x%10);
printf("The sum of the digits of entered number is %d\n",y);
}
