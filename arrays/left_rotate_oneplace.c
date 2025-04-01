#include <stdio.h>
void left_rotate(int n,int arr[]);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    left_rotate(n,arr);
    
   

}
void left_rotate(int n,int arr[]){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }                            //tc:- O(n)  sc:- O(n) extra sc :- O(1)
    arr[n-1]=temp;
     for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");

}