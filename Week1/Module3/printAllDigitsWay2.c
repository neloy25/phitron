#include<stdio.h>

int main(){
    int n;
    int remainder = 0;
    int rev= 0;
    scanf("%d",&n);
    while(n > 0){
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;
    } 
    while(rev > 0){
        remainder = rev % 10;
        rev =  rev / 10;
        printf("%d\n",remainder);
    }
    return 0;
}