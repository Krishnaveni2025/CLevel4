//Question: Get a Three digit number from user and print the digit in “Ones” position
//Example: User Enters “738”
//Answer 8
#include<stdio.h>
int main()
{
int x,y;
printf("Enter a THREE digit Number : ");
scanf("%d",&x);
// Your Program Here
y=x%10;
printf("The digit in Ones position is %d\n",y);
}