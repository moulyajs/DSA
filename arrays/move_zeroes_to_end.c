

//brute force solution
#include <stdio.h>
void move_zeroes_to_end(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
   
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    move_zeroes_to_end(arr,n);
     for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
}

void move_zeroes_to_end(int arr[],int n){
     int temp[n];
    int j = 0; 

    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp[j++] = arr[i];
        }
    }

    
    while (j < n) {
        temp[j++] = 0;
    }

    
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

/*
//optimal solution

#include <stdio.h>
#include <stdio.h>
void move_zeroes_to_end(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
   
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    move_zeroes_to_end(arr,n);
     for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
}
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void move_zeroes_to_end(int arr[],int n){
    int j = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }                     //tc : O(n)  sc : O(1)
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(&arr[i],&arr[j]);
            j++;
        }
    }
}

*/