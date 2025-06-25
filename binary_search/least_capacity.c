//find least capacity to ship packages within D days

#include <stdio.h>
#include <limits.h>
int least_capacity(int arr[],int n,int d);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int d;
    printf("enter no of days:");
    scanf("%d",&d);
    int result = least_capacity(arr,n,d);
    printf("%d\n",result);
}
int func(int weights[],int capacity,int n){
    int days = 1;int load = 0;
    for(int i=0;i<n;i++){
        if(load + weights[i] > capacity){
            days = days + 1;
            load = weights[i];
        }
        else{
            load += weights[i];
        }
    }
    return days;
}
int least_capacity(int arr[],int n,int d){
    int maxi = INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int low = maxi;int high = sum;
    while(low <= high){
        int mid = (low+high)/2;
        int no_of_days = func(arr,mid,n);
        if(no_of_days <= d){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}