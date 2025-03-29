#include <stdio.h>
void bubble_sort(int n,int arr[]);
void swap(int *a,int *b);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubble_sort(n,arr);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

}
void bubble_sort(int n,int arr[]){
    for(int i=n-1;i>=0;i--){
        int didSwap = 0;
        for(int j=0;j<=i-1;j++){                   //worst and average tc is O(n²)
                                                   //best tc is O(n) if the array is already sorted
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap==0){
            break;
        }
        printf("runs\n");
    }
}

void swap(int *a,int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
}