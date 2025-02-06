#include<stdio.h>

int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        int result = fibo(n-1) + fibo(n-2);
        return result;
    }
}

int main(){
    int n, result;
    printf("Enter number: ");
    scanf("%d",&n);

    result = fibo(n);
    printf("%dth term of fibonacci series is %d",n,result);
    return 0;
}