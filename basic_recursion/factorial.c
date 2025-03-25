#include <stdio.h>
int factorial(int n);
int main(){
    int n;
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d\n",fact);
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}