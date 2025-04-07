//sort an array of 0's,1's and 2's

/*

#include <stdio.h>
void sort_array(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort_array(arr,n);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
void sort_array(int arr[],int n){
    int count0 = 0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }
        else if (arr[i]==1){
            count1++;
        }
        else{
            count2++;
        }
    }                   //tc :- O(2n)   sc:-O(1)
    for(int i=0;i<count0;i++){
        arr[i]= 0;
    }
    for(int i=count0;i<count0+count1;i++){
        arr[i]= 1;
    }
    for(int i=count0+count1;i<n;i++){
        arr[i]= 2;
    }

}
*/

//dutch national flag algorithm
//optimal solution
#include <stdio.h>
void sort_array(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort_array(arr,n);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort_array(int arr[],int n){
    int low = 0,mid =0,high = n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(&arr[low],&arr[mid]);
            low++;
            mid++;
        }              //tc :- O(n) sc:-O(1)
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(&arr[mid],&arr[high]);
            high--;
        }
    }
}