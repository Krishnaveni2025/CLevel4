//Question: Get a number from the user and print the reverse of it.
//Example: User Enters "123456" answer: "654321"
#include<stdio.h>
int main()
{
int x,y;
printf("Enter a Number : ");
scanf("%d",&x);    //123456
// Your Program Here
 y=0;    
while(x!=0){        //T   T        T             T             T         T                 F
int digit = x%10; //6    5         4            3            2           1
y=(y*10)+digit ; //6.    65        654     6543     65432    654321
x=x/10;           //12345 1234     123        12        1                 0
}

printf("The  reverse of entered number is %d\n",y);//654321
}
    