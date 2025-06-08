#include <stdio.h>
/*
int binary_iterative_search(int* nums, int numsSize, int target);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int result = binary_iterative_search(arr,n,target);
    printf("%d\n",result);
}

int binary_iterative_search(int* nums, int numsSize, int target){
    int low = 0;
    int high = numsSize - 1;

    while(low<=high){
        int mid = (low + high) / 2;
        if(nums[mid] == target){
            return mid;
        }
        else if(target > nums[mid]) {
            low = mid +1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}
*/
int binary_recursive_search(int* nums , int low,int high,int target);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int result = binary_recursive_search(arr,0,n-1,target);
    printf("%d\n",result);
}

int binary_recursive_search(int* nums , int low,int high,int target){
    if(low > high){
        return -1;
    }
    int mid = (low + high)/2;
    if(nums[mid]==target){
        return mid;
    }
    else if(target > nums[mid]){
        return binary_recursive_search(nums,mid+1,high,target);
    }
    return binary_recursive_search(nums,low,high-1,target);

}