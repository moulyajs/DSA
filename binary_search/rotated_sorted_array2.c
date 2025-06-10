//search
//does target exist
//with duplicates
#include <stdio.h>
int search(int arr[],int n,int target);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int result = search(arr,n,target);
    printf("%d\n",result);
}
//tc :- O(log₂n) -> average  O(n/2) -> worst
int search(int arr[],int n,int target){
     int low = 0;int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            return 1;
        }
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            low++;
            high--;
            continue;
        }
        else{
            if(arr[low] <= arr[mid]){
                if(arr[low] <= target && target <= arr[mid]){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            else{
                if(arr[mid] <= target && target <= arr[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
        }
    }
    return 0;
}