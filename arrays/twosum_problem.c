
//brute force solution
/*

#include <stdio.h>

int two_sum_problem(int arr[],int n,int target);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int result = two_sum_problem(arr,n,target);
    printf("%d\n",result);

}

int two_sum_problem(int arr[],int n,int target){

    for(int i=0;i<n;i++){
                                    //O(n²)
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                return 1;
            }
            
        }
    }
    return 0;
}
*/

//better solution

/*
#include <stdio.h>
#define MAX 10000
int two_sum_problem(int arr[],int n,int target);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int result = two_sum_problem(arr,n,target);
    printf("%d\n",result);

}

int two_sum_problem(int arr[],int n,int target){
int hash[MAX] = {0}; // initialize all elements to 0

    for(int i = 0; i < n; i++) {
        int m = target - arr[i];
        if(m >= 0 && hash[m] == 1) {
            return 1; 
        }
        
        if(arr[i] >= 0 && arr[i] < MAX)
            hash[arr[i]] = 1;
    }

    return 0; 
}
*/
//optimal solution
#include <stdio.h>
void merge_sort(int arr[], int left,int right);
int two_sum_problem(int arr[],int n,int target);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int result = two_sum_problem(arr,n,target);
    printf("%d\n",result);

}

int two_sum_problem(int arr[],int n,int target){
        merge_sort(arr,0,n-1);
        int i =0;int j = n-1;

        while(i<j){
            if(arr[i]+arr[j]==target){
                return 1;
            }
            else if (arr[i]+arr[j]<target){
                i++;                       //tc:-O(n)+O(nlogn)  sc :- O(1)
            }
            else{
                j--;
            }
        }

        return 0;
}


void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    
    int L[n1], R[n2];

    
    for(int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for(int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    
    int i = 0, j = 0, k = left;
    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            arr[k++] = L[i++];
        }
        else {
            arr[k++] = R[j++];
        }
    }

    
    while(i < n1) {
        arr[k++] = L[i++];
    }

    
    while(j < n2) {
        arr[k++] = R[j++];
    }
}

void merge_sort(int arr[], int left, int right) {
    if(left < right) {
        int mid = left + (right - left) / 2;

        merge_sort(arr, left, mid);      
        merge_sort(arr, mid + 1, right); 

        merge(arr, left, mid, right);    
    }
}

