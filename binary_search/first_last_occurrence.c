#include <stdio.h>
#include <stdlib.h>
/*
int lowerbound(int arr[],int n,int x){
    int low = 0;int high = n-1;
    int ans = n;
    while(low <= high){

        int mid = (low+high)/2;
        if(arr[mid] >= x){
            ans =  mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
}
int upperbound(int arr[],int n,int x){
    int low = 0;int high = n-1;
    int ans = n;
    while(low <= high){

        int mid = (low+high)/2;
        if(arr[mid] > x){
            ans =  mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
}
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {

    *returnSize = 2;
    int* result = (int*)malloc(sizeof(int) * 2);

    result[0] = -1;
    result[1] = -1;
    int lb = lowerbound(nums,numsSize,target);
    if(lb == numsSize || nums[lb] != target) {
            return result;
    }
    
    int ub = upperbound(nums,numsSize,target);   //tc:- O(2log₂n)  sc:- O(1)
    result[0]=lb;
    result[1]=ub-1;
    return result;
    
}
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int returnSize;
    int* result = searchRange(arr,n,target,&returnSize);
    printf("[");
    for(int i=0;i<returnSize;i++){
    printf("%d,",result[i]);
    }
    printf("]\n");
}
*/
int firstOccurence(int* nums,int numsSize,int target){
    int low = 0;int high = numsSize - 1;
    int first = -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] == target){
            first = mid;
            high = mid - 1;
        }
        else if(nums[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }

    }
    return first;

}
int lastOccurence(int* nums,int numsSize,int target){
    int low = 0;int high = numsSize - 1;
    int last = -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] == target){
            last = mid;
            low = mid + 1;
        }
        else if(nums[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }

    }
    return last;

}

int* searchRange(int* nums, int numsSize, int target, int* returnSize){
      *returnSize = 2;
    int* result = (int*)malloc(sizeof(int) * 2);
    result[0] = -1;
    result[1] = -1;
    int first = firstOccurence(nums,numsSize,target);
    if(first == -1) {return result;}
    result[0] = first;
    int last = lastOccurence(nums,numsSize,target);
    result[1] = last;

    return result;

}

int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int returnSize;
    int* result = searchRange(arr,n,target,&returnSize);
    printf("[");
    for(int i=0;i<returnSize;i++){
    printf("%d,",result[i]);
    }
    printf("]\n");
}

// to get number of occurences 
// count = (last - first) + 1
// if first == -1 doesn't exist and count = 0