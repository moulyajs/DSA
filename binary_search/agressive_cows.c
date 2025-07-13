#include <stdio.h>
//min distance between cows is max
int agressive_cows(int arr[],int n,int cows);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int cows;
    scanf("%d",&cows);
    //sort first
    int result = agressive_cows(arr,n,cows);
    printf("%d\n",result);
}
int canWePlace(int arr[],int dist,int cows,int n ){
    int cntcows = 1;int last = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-last >= dist){
            cntcows++;
            last = arr[i];
        }
    }
    if(cntcows >= cows){
        return 1;
    }
    else{
        return 0;
    }
}
int agressive_cows(int arr[],int n,int cows){
    int low = 1;int high = arr[n-1] - arr[0];int ans;
    while(low<=high){
        int mid = (low+high)/2;
        if(canWePlace(arr,mid,cows,n) == 1){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }

    }
    return ans;
}