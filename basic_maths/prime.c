#include <stdio.h>
/*
int main(){
    int n;
    scanf("%d",&n);
    int count =0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
        count++;              //time complexity: O(n)
        }
    }
    if(count==2){
        printf("prime");
    }
    else{
        printf("not prime");
    }
    printf("\n");
}
*/
int main(){
    int n;
    scanf("%d",&n);
    int count =0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
        count++;
        if(n/i!=i){
            count++;             //time complexity:O(sqrt(n))
        }
        }
    }
    if(count==2){
        printf("prime");
    }
    else{
        printf("not prime");
    }
    printf("\n");
}
