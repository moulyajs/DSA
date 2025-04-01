/*
//brute force solution
#include <stdio.h>
void left_rotate(int n,int d,int arr[]);
int main(){
     int n;
    scanf("%d",&n);
    int d;
    scanf("%d",&d);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    left_rotate(n,d,arr);
     for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
   

}
void left_rotate(int n,int d,int arr[]){
    d = d % n;
    int temp[d];
    for(int i = 0;i<d;i++){
        temp[i] = arr[i];
    }
    for(int j=d ;j<n;j++){
        arr[j-d]=arr[j];
    }
    for(int k=n-d;k<n;k++){
        arr[k]= temp[k-(n-d)];
    }

}

*/
//optimal solution
#include <stdio.h>
void left_rotate(int n,int d,int arr[]);
void reverse(int arr[],int start,int end);
int main(){
     int n;
    scanf("%d",&n);
    int d;
    scanf("%d",&d);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    left_rotate(n,d,arr);
     for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
   

}
void left_rotate(int n,int d,int arr[]){
    d = d % n;
   reverse(arr,0,d-1);
   reverse(arr,d,n-1);
   reverse(arr,0,n-1);

}
void reverse(int arr[],int start,int end){
    while(start <= end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
