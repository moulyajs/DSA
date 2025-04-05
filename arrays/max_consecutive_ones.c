#include <stdio.h>
int find_max_consecutive_ones(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int result = find_max_consecutive_ones(arr,n);
    printf("max = %d\n",result);

}
int find_max_consecutive_ones(int arr[],int n){
    int max = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count +=1;
            max = count > max ? count : max;
            
        }
        else {
            count = 0;
            
        }

    }
    return max;
}
