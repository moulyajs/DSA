#include <stdio.h>
int find_peak_element(int arr[],int n);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
    int result = find_peak_element(arr,n);
    printf("%d\n",result);
}     //tc :- O(log₂n)
int find_peak_element(int arr[],int n){

    if(n==1){
        return 0;
    }
    if(arr[0] > arr[1]){
        return 0;
    }
    if(arr[n-1] > arr[n-2]){
        return n-1;
    }
    int low = 1;int high = n-2;
    while(low <= high){
        int mid = (low+high)/2;
        if((arr[mid] > arr[mid-1]) && (arr[mid] > arr[mid+1])){
            return mid;
        }
        else if(arr[mid] > arr[mid-1]){
            low = mid + 1;
        }
        //else if(arr[mid] > arr[mid+1]){
        //    high = mid - 1;
        //}
        else{
            high = mid - 1;
        }

    }
    return -1;
}