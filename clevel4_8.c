//Question: Get a FOUR digit number from the user and print the reverse of it.
//Example: User Enters “6738”
//Answer - 8376
#include<stdio.h>
int main()
{
int x,y;
printf("Enter a FOUR digit Number : ");
scanf("%d",&x);
// Your Program Here
y=((x%10)*1000)+(((x%100)/10)*100)+(((x/100)%10)*10)+(x/1000);
printf("The reverse of the entered number is %d\n",y);
}
