#include <stdio.h>
int main(){
    int n;int revnum=0;
    scanf("%d",&n);
    int temp=n;
    while(n>0){
    int last;
    last = n%10;
   revnum = (revnum * 10)+last;  
   
    n/=10;
    }
    if(revnum==temp){
        printf("is palindrome");
    }
    else{
        printf("not palindrome");
    }
    printf("\n");
    return 0;
}