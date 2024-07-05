//Question: Write a program to print the total number of single digit odd numbers
//Answer - 5
#include<stdio.h>
int main()
{
int x=1;
int c=0;
while(x<10){
    if(x%2!=0)
        c++;
        x++;
    }
    printf("Total number of single digit Odd numbers are: %d",c);
 }
 