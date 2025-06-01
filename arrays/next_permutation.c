#include <stdio.h>
void next_permutation(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
   next_permutation(arr,n);
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void swap(int *a ,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int arr[],int left,int right){
        while(left<right){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
}
void next_permutation(int arr[],int n){
    int index = -1;
    for(int i = n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            index = i;
            break;
        }
    }
    if(index == -1){
        //reverse
        reverse(arr,0,n-1);     //tc:-O(3n) sc:-O(1)  
         printArray(arr,n);
         return;
    }

    for(int i=n-1;i>index;i--){
        if(arr[i]>arr[index]){
            swap(&arr[i],&arr[index]);
            break;
        }
    }
    reverse(arr,index+1,n-1);
   printArray(arr,n);
}