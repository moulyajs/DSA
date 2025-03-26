#include <stdio.h>
int fibonacci(int n);
int main(){
    int n;
    scanf("%d",&n);
    int result = fibonacci(n);
    printf("%d\n",result);
    
}

int fibonacci(int n){                   // O(2 to the power of n) exponential 
    if(n<=1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}