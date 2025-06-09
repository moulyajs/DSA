#include <stdio.h>
int lowerbound(int arr[],int n,int x);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int result = lowerbound(arr,n,target);
    printf("%d\n",result);
}

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

//use same code for this👇
//Given a sorted array of distinct integers and a target value, return the index if the target is found. 
//If not, return the index where it would be if it were inserted in order.

//And also for finding ceil