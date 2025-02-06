#include<stdio.h>

long long int fact(int n){
    if(n <= 1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
    int n, result;
    printf("Enter number: ");
    scanf("%d",&n);

    if(n<0){
        printf("Factorial of this number is not defined!");
    }
    else{
        result = fact(n);
    }
    printf("Factorial of %d! is %d",n,result);
    return 0;
}