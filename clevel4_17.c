//Question: Write a program to print the sum of all single digit odd numbers
//Answer - 25
#include<stdio.h>
int main()
{
int x=1;
int sum=0;
while(x<10){
    if(x%2!=0)
         sum = sum+x;
         x++;
    }
    printf("The sum of all single digit Odd numbers are: %d",sum);
 }
 