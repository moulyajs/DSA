#include <stdio.h>
#include <limits.h>
int min_days(int arr[],int n,int m,int k);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m;
    printf("enter no of bouquests:");
    scanf("%d",&m);
    int k;
    printf("enter adjacent flowers required:");
    scanf("%d",&k);
    int result = min_days(arr,n,m,k);
    printf("%d\n",result);
}
int possible(int arr[],int day,int m,int k,int n){
    int count = 0;int no_of_bouquets = 0;
    for(int i=0;i<n;i++){
        if(arr[i] <= day ){
            count++;
        }
        else{
            no_of_bouquets +=(count/k);
            count = 0;
        }
    }
    no_of_bouquets += (count/k);
    if(no_of_bouquets >= m){
        return 1;
    }
    else{
        return 0;
    }
}
int min_days(int arr[],int n,int m,int k){
    int min = INT_MAX; int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
     for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int low = min;int high = max;int ans;
    while(low<=high){
        int mid = (low+high)/2;
        if(possible(arr,mid,m,k,n) == 1){
            ans = mid;
            high = mid - 1;

        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

//tc:- O(n*log(max-min+1))