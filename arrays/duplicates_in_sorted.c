#include <stdio.h>
int find_duplicates(int n,int arr[]);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int elements = find_duplicates(n,arr);
    printf("%d\n",elements);
    for(int j=0;j<elements;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
}
int find_duplicates(int n,int arr[]){
    int i = 0;
    for(int j = 1;j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1]=arr[j];        // tc : O(n)   sc : O(1)
            i++;
        }
    }
    return i+1;
}