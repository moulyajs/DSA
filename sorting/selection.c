#include <stdio.h>

void selection_sort(int n,int arr[]);

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selection_sort(n,arr);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

}
void selection_sort(int n,int arr[]){
        for(int i=0;i<=n-2;i++){
            int min=i;                         //O(n²)
            for(int j=i;j<=n-1;j++){
                    if(arr[j]<arr[min]){
                        min=j;
                    }
            }
            
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
            
        }
}
