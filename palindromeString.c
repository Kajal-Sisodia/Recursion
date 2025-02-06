#include<stdio.h>
#include<string.h>

int isPalindrome(char s[], int start, int end){
    if(start >= end){
        return 1;
    }
    else{
        if(s[start]!=s[end]){
            return 0;
        }
        isPalindrome(s, start+1, end-1);
    }
}

int main(){
    char str[100];
    int length;
    printf("Enter the string: ");
    scanf("%s",&str);
    length = strlen(str);
    
    if(isPalindrome(str,0,length-1)){
        printf("It is a Palindrome");
    }
    else{       
        printf("It is not a Palindrome");
    }
    
    return 0;
}