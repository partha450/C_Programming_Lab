#include<stdio.h>
int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if(n>0){
        printf("Number is Positive !!");
    }else if(n<0){
        printf("Number is Negative !!");
    }else{
        printf("Number is equal to 0 !!");
    }
}