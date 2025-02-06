#include<stdio.h>

void printNumbers(int current, int n){
    if(current>n){
        return;
    }
    else{
        printf("%d ",current);
        printNumbers(current+1,n);
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
    printNumbers(1,n);
    }
    return 0;
}