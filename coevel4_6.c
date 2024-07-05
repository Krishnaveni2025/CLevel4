//Question: Get a Two digit number from the user and print the reverse of it.
//Example: User Enters “73”
//Answer - 37
#include<stdio.h>
int main()
{
int x,y;
printf("Enter a TWO digit Number : ");
scanf("%d",&x);
// Your Program Here
y=((x%10)*10)+(x/10);
printf("The reverse of the entered number is %d\n",y);
}
