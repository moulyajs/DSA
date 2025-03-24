#include <stdio.h>
int main(){
    int n;int count=0;
    scanf("%d",&n);
    if(n==0){
        printf("1\n");
        return 0;
    }
    while(n>0){
                        //time complexity: O(logbase10(N)) because N is divided by 10
                        //division ---- logarithmic
   
   count+=1;
    n/=10;
    }
    printf("%d",count);
    printf("\n");
    return 0;
}