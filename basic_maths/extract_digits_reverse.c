#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("0\n");
        return 0;
    }
    while(n>0){
    int last;
    last = n%10;
    printf("%d",last);
    n/=10;
    }
    printf("\n");
    return 0;
}