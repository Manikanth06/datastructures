#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}

void main(){
    int n;
    printf("Enter an integer n:\n");
    scanf("%d",&n);
    printf("The factorial of %d = %d", n, fact(n));
}