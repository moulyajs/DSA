#include <stdio.h>
void insertion_sort(int n,int arr[]);

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertion_sort(n,arr);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

}

void insertion_sort(int n,int arr[]){
    for(int i=1;i<=n-1;i++){
        int v = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>v){   //worst and average O(n²) and best O(n)
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1]=v;
    }
}