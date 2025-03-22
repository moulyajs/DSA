/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/


#include <stdio.h>
int main(){
     int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){         // if u start from 1 then i<=n 
        for(int j=0;j<n-i;j++){  //orelse if u start from 1 then j<=n-i+1
            printf("%d ",j+1);
        }
        printf("\n");
    }
}