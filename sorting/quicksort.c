#include <stdio.h>
void swap(int *a,int *b);
void quicksort(int arr[],int low,int high);
int partition(int arr[],int low,int high);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);                       
                                                
    }
    printf("\n");
}
void quicksort(int arr[],int low,int high){
    if(low < high){
        int pindex = partition(arr,low,high);
        quicksort(arr,low,pindex-1);
        quicksort(arr,pindex+1,high);      //tc :- O(nlogn)   sc :- O(1)
    }

}
int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<= pivot && i <= high - 1){
            i++;
        }
        while(arr[j]>pivot && j >= low+1){
            j--;
        }
        if(i<j){
            swap(&arr[i],&arr[j]);
        }

    }
    swap(&arr[low],&arr[j]);
    return j;
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}