//find minimum

#include <stdio.h>
#include <limits.h>
int find_minimum(int arr[],int n);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
    int result = find_minimum(arr,n);
    printf("%d\n",result);
}
int find_minimum(int arr[],int n){
    int low = 0;int high = n-1;
    int ans = INT_MAX;
    while(low <=high){
        int mid = (low+high)/2;
        if(arr[low] <= arr[high]){
            ans =  arr[low] < ans ? arr[low]  : ans;
            break;
        }
        if(arr[low] <= arr[mid]){
            ans =  arr[low] < ans ? arr[low]  : ans;
            low = mid + 1;
        }
        else{
            high = mid - 1;
            ans =  arr[mid] < ans ? arr[mid]: ans;
        }
    }
    return ans;

}
