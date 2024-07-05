//Question: Write a program to print the total number of Two digit odd numbers
//Answer - 45
#include<stdio.h>
int main()
{
int x=10;
int c=0;
while(x<100){
    if(x%2!=0)
        c++;
        x++;
    }
    printf("Total number of Two digit Odd numbers are: %d",c);
 }
 