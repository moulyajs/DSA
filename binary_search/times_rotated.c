#include <stdio.h>
#include <limits.h>
//no of times array is rotated = index of minimum 
int times_rotated(int arr[],int n);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
    int result = times_rotated(arr,n);
    printf("%d\n",result);
}
int times_rotated(int arr[],int n){
 int low = 0;int high = n-1;
    int ans = INT_MAX;int index;
    while(low <=high){
        int mid = (low+high)/2;
        if(arr[low] <= arr[high]){
            if (arr[low] < ans){
                ans = arr[low];
                index = low;
            };
            break;
        }
        if(arr[low] <= arr[mid]){
             if (arr[low] < ans){
                ans = arr[low];
                index = low;
            };
            low = mid + 1;
        }
        else{
            high = mid - 1;
             if (arr[mid] < ans){
                ans = arr[mid];
                index = mid;
            };
           
        }
    }
    return index;
}