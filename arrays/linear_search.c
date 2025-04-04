#include <stdio.h>
int linear_search(int arr[],int n,int num);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num;
    scanf("%d",&num);
    int result = linear_search(arr,n,num);
    printf("%d\n",result);

}
int linear_search(int arr[],int n,int num){
    for(int i=0;i<n;i++){
        if(arr[i]== num){
            return i;
        }
    }
    return -1;
}