#include <stdio.h>
int book_allocation(int arr[],int n,int students);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int students;
    scanf("%d",&students);
    int result = book_allocation(arr,n,students);
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
int book_allocation(int arr[],int n,int students){
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
        int no_of_stu = func(arr,n,mid);
        if(no_of_stu > students){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return low;
}
