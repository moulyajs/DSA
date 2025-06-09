#include <stdio.h>
int floor_number(int arr[],int n,int x);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int result = floor_number(arr,n,target);
    printf("%d\n",result);
}

int floor_number(int arr[],int n,int x){
    int low = 0;int high = n-1;
    int ans = -1;
    while(low <= high){

        int mid = (low+high)/2;
        if(arr[mid] <= x){
            ans =  arr[mid];
            low = mid +1;
        }
        else{
            high= mid - 1;
        }
    }

    return ans;
}