#include<stdio.h>
#include<string.h>

void reverString(char s[], int start, int end){
    if(start >= end){
        return ;
    }
    char t = s[start];
    s[start] = s[end];
    s[end] = t;
    reverString(s, start+1, end-1);
    
}

int main(){
    char str[100];
    int length;
    printf("Enter the string: ");
    scanf("%s",&str);
    length = strlen(str);

    reverString(str, 0, length-1);
    printf("Reverse string is %s",str);
    
    return 0;
}