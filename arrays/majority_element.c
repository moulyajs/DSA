//the element which appears more than n/2 times

//brute force solution
/*
#include <stdio.h>
int find_majority_element(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
   
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   int result = find_majority_element(arr,n);
   printf("%d",result);

    printf("\n");
}
int find_majority_element(int arr[],int n){
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count ++;
            }
        }                      //tc:-O(n²)
        if(count > n/2){
            return arr[i];
        }
    }
    return -1;
    
}
*/
//better solution:-hashing      tc:- O(nlogn)+O(n)   sc :- O(n)


//optimal solution - moore's voting algorithm

#include <stdio.h>
int find_majority_element(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
   
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   int result = find_majority_element(arr,n);
   printf("%d",result);

    printf("\n");
}
int find_majority_element(int arr[],int n){
    int count =0;
    int ele;
    for(int i=0;i<n;i++){
        if(count == 0){
            count = 1;
            ele = arr[i];
        }
        else if(arr[i]==ele){        //tc :- O(n)  sc:- O(1)
            count++;
        }
        else{
            count--;

        }
    }

    int count1 =0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            count1++;
        }
    }
    if(count1>n/2){
        return ele;
    }
    return -1;
    
}
