//Question: Write a program to print the sum of all Two digit odd numbers
//Answer - 2475
#include<stdio.h>
int main()
{
int x=10;
int sum=0;
while(x<100){
    if(x%2!=0)
        sum=sum+x;
        x++;
    }
    printf("The sum of all Two digit Odd numbers are: %d",sum);
 }
 