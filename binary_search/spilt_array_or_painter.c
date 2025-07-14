//same as book allocation problem

#include <stdio.h>
int split_array(int arr[],int n,int painters);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int painters;
    scanf("%d",&painters);
    int result = split_array(arr,n,painters);
    printf("%d\n",result);
}
int func(int arr[],int n,int pages){
    int student = 1;int pagesStudent = 0;
    for(int i=0;i<n;i++){
        if(pagesStudent + arr[i] <= pages){    //tc :-O(log₂(sum-max+1))*O(n)  sc:- O(1)
            pagesStudent += arr[i];
        }
        else{
            student++;
            pagesStudent = arr[i];
        }

    }
    return student;

}
int split_array(int arr[],int n,int painters){
    int low = -1;int high = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > low){
            low = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        high += arr[i];
    }
    while(low<=high){
        int mid = (low+high)/2;
        int no_of_painters = func(arr,n,mid);
        if(no_of_painters > painters){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return low;
}
