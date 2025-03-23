/*

  *
 ***
*****
*****
 ***
  *

*/

//combine 7 and 8

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
            
        }
        for(int k=0;k<((2*i)+1);k++){
                printf("*");
            }
         for(int j=0;j<n-i;j++){
            printf(" ");
            
        }  
        printf("\n");
    }
   printf(" ");
    for(int i=0;i<n;i++){
        for(int j=0;j!=i;j++){
            printf(" ");
        }
        for(int k=0;k<(((n-(i+1))*2)+1);k++){
            printf("*");
        }

        for(int j=0;j!=i;j++){
            printf(" ");
        }
       printf("\n "); 
      
    }
    printf("\n");
}

//there is an issue 