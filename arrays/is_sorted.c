#include <stdio.h>
int is_sorted(int n,int arr[]);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result = is_sorted(n,arr);
    if(result == 0){
        printf("not sorted\n");
    }
    else{
        printf("sorted\n");
    }
}
int is_sorted(int n,int arr[]){
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){       //O(n)
            
        }
        else{
            return 0;
        }

    }
    return 1;
}