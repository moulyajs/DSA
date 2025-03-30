#include <stdio.h>
void mergesort(int arr[],int low,int high);
void merge(int arr[],int low,int mid,int high);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);                       //tc :- O(nlog₂n)
                                                //sc :- O(n)
    }
    printf("\n");
}

void mergesort(int arr[],int low,int high){
    if(low>=high){
        return;
    }
    int mid = (low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

void merge(int arr[],int low,int mid,int high){
        int temp[high-low+1];
        int left = low;
        int right = mid + 1;
        int k =0;
        while(left <= mid && right <= high){
            if (arr[left]<= arr[right]){
                temp[k++]=arr[left++];

            }
            else{
                temp[k++]=arr[right++];
            }
        }

        while(left <= mid){
                temp[k++]=arr[left++];

        }

        while(right<=high){
                 temp[k++]=arr[right++];
        }
         for (int i = 0; i < k; i++) {
        arr[low + i] = temp[i];
    }

}