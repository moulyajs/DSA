//find smallest divisor given a threashold 

#include <stdio.h>
#include <limits.h>
#include <math.h>
int smallest_divisor(int arr[],int n,int threshold);

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int threshold;
    scanf("%d",&threshold);
    int result = smallest_divisor(arr,n,threshold);
    printf("%d\n",result);
}
int find_divisor(int arr[],int n,int value){
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += ceil((double)arr[i]/(double)value);
    }
    return sum;
}
int smallest_divisor(int arr[],int n,int threshold){
    int maxi =  INT_MIN;
    if(n>threshold){
        return -1;
    }
    for(int i=0;i<n;i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }

    }
    int low = 1;int high = maxi; int ans;
    while(low <= high){
       
        int mid = (low+high)/2;
        int sum = find_divisor(arr,n,mid);
        if(sum <= threshold){
                ans = mid;
                high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

//tc:- O(log₂(max)*N)
//sc:- O(1)