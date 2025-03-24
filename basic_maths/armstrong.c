//find reverse of given number .and also (eg:10400 is 401)

#include <stdio.h>
int main(){
    int n;int sum=0;
    scanf("%d",&n);
    int temp=n;
    while(n>0){
    int last;
    last = n%10;
    sum+= last*last*last;
   
    n/=10;
    }
        if(sum==temp){
        printf("is armstrong");
    }
    else{
        printf("not armstrong");
    }
    printf("\n");
    return 0;
}