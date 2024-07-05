//Question: Get a Three digit number from the user and print the reverse of it.
//Example: User Enters “738”
//Answer - 837
#include<stdio.h>
int main()
{
int x,y;
printf("Enter a THREE digit Number : ");
scanf("%d",&x);
// Your Program Here
y=((x%10)*100)+(((x%100)/10)*10)+(x/100);
printf("The reverse of the entered number is %d\n",y);
}
