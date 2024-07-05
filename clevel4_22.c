//Question: Write a program to print the total number of Three digit Prime numbers
//Answer : 143
#include<stdio.h>
int main(){
int x,y,c;
c=0;
    for(x=100;x<1000;x++){
        int is_prime = 1;
        for(y=2;y*y<=x;y++){
            if(x%y == 0){
                is_prime =0;
                break ; 
            }
        }
        if(is_prime){
        c++;
        }
    }
printf("The total number of THREE digit prime numbers are: %d",c);
}