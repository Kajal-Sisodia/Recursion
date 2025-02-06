#include<stdio.h>

int sum(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n + sum(n-1);
    }
}

int main(){
    int n, result;
    printf("Enter number: ");
    scanf("%d",&n);

    result = sum(n);
    printf("Sum upto %d is %d",n,result);
    return 0;
}