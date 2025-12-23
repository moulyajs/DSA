#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool containsDuplicate(int* nums, int numsSize);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bool result = containsDuplicate(arr,n);
    if (result) {
    printf("true\n");
} else {
    printf("false\n");
}


}
void merge(int* arr,int low,int mid,int high){
    int temp[high-low+1];
    int left = low;
    int right = mid + 1;int k =0;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp[k++] = arr[left++];
        }
        else{
            temp[k++] = arr[right++];
        }
    }
    while(left <= mid){
        temp[k++] = arr[left++];
    }
    while(right <= high){
        temp[k++] = arr[right++];
    }
    for(int i=0;i<k;i++){
        arr[low+i] = temp[i];
    }
}

void merge_sort(int* nums,int low,int high){
    if(low >= high){
        return;
    }
    int mid = (low+high)/2;
    merge_sort(nums,low,mid);
    merge_sort(nums,mid+1,high);
    merge(nums,low,mid,high);

}


bool containsDuplicate(int* nums, int numsSize) {
    merge_sort(nums,0,numsSize-1);
    for(int i=0;i<numsSize-1;i++){
        if(nums[i] == nums[i+1]){
            return true;
        }

    }
    return false;
    
}
