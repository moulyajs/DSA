//maximum subarray sum 
//arr[] = {1,4,-6,8}
//subarray is contiguous part {1,4} or{-6,8}  
//subsequence {1,-6,8}

//brute force
#include <stdio.h>
#include <limits.h>
/*
int maximum_subarray_sum(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int result = maximum_subarray_sum(arr,n);
    printf("%d\n",result);
}

int maximum_subarray_sum(int arr[],int n){
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum =0 ;
            for(int k=i;k<=j;k++){
                 sum += arr[k];       //tc:- O(n³)  sc:-O(1)
            }
            if(sum > max_sum){
                max_sum = sum;
            }
        }
    }
    return max_sum;
}
*/
//better solution
/*
int maximum_subarray_sum(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int result = maximum_subarray_sum(arr,n);
    printf("%d\n",result);
}
int maximum_subarray_sum(int arr[],int n){
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            if(sum > max_sum){          //tc:- O(n²)  sc:- O(1)
                max_sum = sum;
            }
        }
    }
    return max_sum;
}
*/

//Optimal solution :- Kadane's algorithm
/*
int maximum_subarray_sum(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int result = maximum_subarray_sum(arr,n);
    printf("%d\n",result);
}
int maximum_subarray_sum(int arr[],int n){
    int max_sum = INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum > max_sum){
                max_sum = sum;    //tc:-O(n) sc:-O(1)
            }
            if(sum < 0){
                sum = 0;

            }
            
    }
    if(max_sum < 0){
        max_sum = 0;  // only if they have given emty subarray meaning if every element is negative
    }
    return max_sum;
}
*/

//to return the subarray which gives max sum
int maximum_subarray_sum(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int result = maximum_subarray_sum(arr,n);
    printf("max sum:%d\n",result);
}
int maximum_subarray_sum(int arr[],int n){
    int max_sum = INT_MIN;
    int sum = 0;int ansStart = -1;int ansEnd = -1;int start=0;
    for(int i=0;i<n;i++){
            
            if(sum == 0){
                start = i;
            }
             sum+=arr[i];
            if(sum > max_sum){
                max_sum = sum; 
                ansStart = start;
                ansEnd = i;  
            }
            if(sum < 0){
                sum = 0;         //tc:- O(n) sc:- O(1)

            }
            
    }
    printf("subarray with max sum\n");
    for(int i=ansStart;i<=ansEnd;i++){
        
        printf("%d ",arr[i]);
    }
    
    
    return max_sum;
}