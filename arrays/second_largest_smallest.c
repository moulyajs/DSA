#include <stdio.h>
#include <limits.h>
int find_second_largest(int n,int arr[]);
int find_second_smallest(int n,int arr[]);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     int slargest = find_second_largest(n,arr);
    printf("second largest %d\n",slargest);
     int ssmallest = find_second_smallest(n,arr);
    printf("second smallest %d\n",ssmallest);
}
int find_second_largest(int n,int arr[]){
    int largest = arr[1];
    int slargest = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i]>largest){
            slargest = largest;        // O(n)
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    return slargest;

}

int find_second_smallest(int n,int arr[]){

     int smallest = arr[1];
    int ssmallest = INT_MAX;
    for(int i = 0;i<n;i++){
        if(arr[i]<smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i]<ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;

}