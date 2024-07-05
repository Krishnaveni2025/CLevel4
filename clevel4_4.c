//Question: Get a Three digit number from user and print the digit in “ten'es” position
//Example: User Enters “738”
//Answer 3
#include<stdio.h>
int main()
{
int x,y;
printf("Enter a THREE digit Number : ");
scanf("%d",&x);
// Your Program Here
y=(x%100)/10;
printf("The digit in tenes position is %d\n",y);
}