//brute force approach
/*
#include <stdio.h>
int find_once_found_number(int arr[],int n);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int result = find_once_found_number(arr,n);
    printf("%d\n",result);

}
int find_once_found_number(int arr[],int n){
    for(int i=0;i<n;i++){
        int num = arr[i];
        int count=0;
        for(int j =0;j<n;j++){
            if(arr[j]==num){
                count++;
            }
        }
        if(count == 1){                //tc :- O(n²)
            return num;
        }
    }
    return 0;
}
*/
//better solution
/*
#include <stdio.h>
#include <stdlib.h>

int find_once_found_number(int arr[],int n);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int result = find_once_found_number(arr,n);
    printf("%d\n",result);

}

int find_once_found_number(int arr[],int n){
    int max =0;

    for(int i=0;i<n;i++){
        if(arr[i]> max){            //tc :- O(3n) sc :- O(max)
            max = arr[i];
        }
    }
    int *hash = (int *)calloc(max,sizeof(int));
    for(int i=0;i<n;i++){
        hash[arr[i]] +=1;
    }
    for(int i=0;i<n;i++){
        if(hash[arr[i]]==1){
            return arr[i];
        }
    }
    return 0;
}
*/

#include <stdio.h>

int find_once_found_number(int arr[],int n);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int result = find_once_found_number(arr,n);
    printf("%d\n",result);

}

int find_once_found_number(int arr[],int n){
    int xor = 0;
    for(int i=0;i<n;i++){
        xor = xor ^ arr[i];      // tc :- O(n)  sc :- O(1)
     }
    return xor;
}