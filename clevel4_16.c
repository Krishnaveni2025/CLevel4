//Question: Write a program to print the total number of Three digit odd numbers
//Answer - 450
#include<stdio.h>
int main()
{
int x=100;
int c=0;
while(x<1000){
    if(x%2!=0)
        c++;
        x++;
    }
    printf("Total number of Three digit Odd numbers are: %d",c);
 }
 