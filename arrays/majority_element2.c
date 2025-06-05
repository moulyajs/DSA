//majority element (> floor(n/3) times)
//brute force

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/*
void majority_element(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    majority_element(arr,n);

}
void majority_element(int arr[],int n){
     int k = 0;
     int ans[k];
     for(int i=0;i<n;i++){
        if(k==0||ans[0] != arr[i]){
            int count = 0;
            for(int j=0;j<n;j++){
                if(arr[j] == arr[i]){   //tc:- O(n²)  sc:-O(1)
                    count ++;
                }
            }
            if(count > n/3){
                ans[k] = arr[i];k++;
            }
        }
        if(k ==2){
            break;
        }
     }
    for(int i=0;i<k;i++){
        printf("%d ",ans[i]);
    }
    printf("\n");
}

*/

//better solution

//hashing tc :- O(n) or O(logn)  sc:-O(n)

//optimal solution

int* majority_element(int arr[],int n,int* resultSize);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int resultSize;
    int* result = majority_element(arr,n,&resultSize);
    for(int i=0;i<resultSize;i++){
        printf("%d",result[i]);
    }

    printf("\n");

}          //tc:- O(n) sc:- O(1)
int* majority_element(int arr[],int n,int* resultSize){
    int count1 =0;int count2 = 0;
    int ele1 = INT_MIN;
    int ele2 = INT_MIN;
    for(int i=0;i<n;i++){
        if(count1 == 0 && arr[i] != ele2){
            count1 = 1;
            ele1 = arr[i];
        }
        else if(count2==0 && arr[i] != ele1){
            count2 = 1;
            ele2 = arr[i];
        }
        else if(arr[i] == ele1){
            count1++;
        }
        else if(arr[i] == ele2){
            count2++;
        }
        else{
            count1--;
            count2--;
        }
    }
    int k =0;
    int* result = (int*)malloc(sizeof(int)*2);
    count1 = 0;count2 = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele1){
            count1++;
        }
        else if(arr[i]==ele2){
            count2++;
        }
    }
    int mini = n/3 + 1;
    if(count1 >= mini){
        result[k] = ele1;
        k++;
    }
    if(count2 >= mini){
        result[k] = ele2;
        k++;
    }
    *resultSize = k;
    return result;

}