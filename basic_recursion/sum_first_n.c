//parameterized 
/*
#include <stdio.h>
void sum_of_n(int i,int sum);
int main(){
    int n;
    scanf("%d",&n);
    sum_of_n(n,0);
}

void sum_of_n(int i,int sum){
    if(i<1){
        printf("%d\n",sum);
        return;
    }
    else{
        sum_of_n(i-1,sum+i);
    }
}
*/
#include <stdio.h>
int sum_of_n(int n);
int main(){
    int n;
    scanf("%d",&n);
    int sum=sum_of_n(n);
    printf("%d\n",sum);
}
int sum_of_n(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+sum_of_n(n-1);
    }
}
