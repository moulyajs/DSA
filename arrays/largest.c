#include <stdio.h>
int find_largest(int n,int arr[]);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest = find_largest(n,arr);
    printf("%d\n",largest);
}

int find_largest(int n,int arr[]){
    int large = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            large = arr[i];
        }
    }
    return large;
}