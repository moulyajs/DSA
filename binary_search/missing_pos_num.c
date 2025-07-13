//find kth missing positive number
int kth_missing(int arr[],int n,int k);
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int result = kth_missing(arr,n,k);
    printf("%d\n",result);
}
int kth_missing(int arr[],int n,int k){

    int low =0;int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        int missing = arr[mid] - (mid+1);
        if(missing < k){
            low = mid + 1;

        }
        else{
            high = mid - 1;
        }
    }
    return (low+k);
}