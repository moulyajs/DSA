/*

#include <stdio.h>

int main(){
    int n1,n2;int gcd = 1;
    scanf("%d",&n1);
    scanf("%d",&n2);
    int min_value = (n1<n2)? n1:n2;
    for(int i=1;i<= min_value;i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }
    }                                //O(min(a,b))
    printf("%d",gcd);
    printf("\n");
}
*/

//euclidean
#include <stdio.h>
int main(){
    int n1,n2;int gcd = 1;
    scanf("%d",&n1);              // O(logphi(min(a,b)))
    scanf("%d",&n2);
    while (n1>0 && n2 > 0){
        if(n1>n2){
            n1 = n1 % n2;
        }
        else{
            n2 = n2 % n1;
        }

    }
    if(n1==0){
        printf("%d",n2);
    }
    else{
        printf("%d",n1);
    }
    printf("\n");
}