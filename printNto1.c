#include<stdio.h>

void printNumbers(int n){
    if(n<1){
        return ;
    }
    else{
        printf("%d ",n);
        printNumbers(n-1);

    }
}

int main(){
    int n, result;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Enter a positive number");
    }
    else{
        printNumbers(n);
    }
    return 0;
}