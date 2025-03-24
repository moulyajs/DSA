//find reverse of given number .and also (eg:10400 is 401)

#include <stdio.h>
int main(){
    int n;int revnum=0;
    scanf("%d",&n);
    
    while(n>0){
    int last;
    last = n%10;
   revnum = (revnum * 10)+last;  //appends it to revnum
   
    n/=10;
    }
    printf("%d",revnum);
    printf("\n");
    return 0;
}