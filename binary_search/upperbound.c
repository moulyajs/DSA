#include <stdio.h>
int upperbound(int arr[],int n,int x);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int result = upperbound(arr,n,target);
    printf("%d\n",result);
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
