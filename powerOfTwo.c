#include<stdio.h>

int powerOfTwo(int n){
    if(n==0){
        return 1;
    }
    else{
        return (2* powerOfTwo(n-1));
    }
}

int main(){
    int n, res;
    printf("Enter the number: ");
    scanf("%d",&n);

    res = powerOfTwo(n);
    printf("%d to the power of 2 is %d",n,res);
    return 0;
}