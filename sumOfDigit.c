#include<stdio.h>

int sumOfDigit(int n){
    if(n==0){
        return 0;
    }
    else{
    
        return (n%10 + sumOfDigit(n/10));
    }
}

int main(){
    int n, result;
    printf("Enter number: ");
    scanf("%d",&n);

    result = sumOfDigit(n);
    printf("Sum upto %d is %d",n,result);
    return 0;
}