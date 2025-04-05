//brute force solution
/*
#include <stdio.h>
int missing_number(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int result = missing_number(arr,n);
    printf("%d\n",result);

}

int missing_number(int arr[],int n){
    for(int i=1;i<=n;i++){
        int flag = 0;
        for(int j =0;j<n;j++){
            if(arr[j]==i){
                flag = 1;
                break;              //tc :- O(n²)  sc :- O(1)
            }
        }
        if(flag == 0){
            return i;
        }
    }
    return 0;
}
*/

//better solution
/*
#include <stdio.h>
#include <stdlib.h>
int missing_number(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int result = missing_number(arr,n);
    printf("%d\n",result);

}
int missing_number(int arr[],int n){

   int *hash = (int *)calloc((n+1),sizeof(int));

   for(int i=0;i<n;i++){
    if(arr[i]<=n){
    hash[arr[i]]=1;             //tc :- O(n)+O(n)   sc :- O(n)
    }
   }

   for(int i=1;i<=n;i++){
    if(hash[i]==0){
        free(hash);
        return i;
    }
   }
   free(hash);
   return 0;
}
*/

//optimal solution 1
/*
#include <stdio.h>
int missing_number(int arr[],int n);
int main(){
    
    int arr[5] = {1,2,3,5};
    
    int result = missing_number(arr,5);
    printf("%d\n",result);

}
int missing_number(int arr[],int n){
    int sum = n*(n+1)/2;
    int sum2;
    for(int i=0;i<n;i++){
        sum2 += arr[i];   // tc :-  O(n)  sc :- O(1)
    }
    int result = sum - sum2;
    return result;

}
*/

//optimal solution 2
#include <stdio.h>

int missing_number(int arr[], int n);

int main() {
    int n;
    scanf("%d", &n);
    int arr[n - 1];
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }
    int result = missing_number(arr, n);
    printf("%d\n", result);
    return 0;
}

int missing_number(int arr[], int n) {
    int xor1 = 0; // XOR of all numbers from 1 to n
    int xor2 = 0; // XOR of all elements in the array

    for (int i = 1; i <= n; i++) {
        xor1 ^= i;
    }

    for (int i = 0; i < n - 1; i++) {           //tc :- O(n) slightly better than optimal solution 1 as sum in optimal solution 1 cannnot exceed 10⁵
        xor2 ^= arr[i];
    }

    return xor1 ^ xor2;
}

