#include<stdio.h>

int countDigit(int n){
    if(n==0){
        return 0;
    }
    else{
        return (1 + countDigit(n/10));
    }
}

int main(){
    int n, res;
    printf("Enter a number: ");
    scanf("%d",&n);

    res = countDigit(n);
    
    printf("Total digits of %d is %d",n,res);
    return 0;

}