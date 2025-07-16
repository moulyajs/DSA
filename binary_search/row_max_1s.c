//find the row with maximum number of 1s ; row is sorted

#include <stdio.h>
#include <stdlib.h>
int max_ones(int **matrix,int n,int m);
int main(){
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int **matrix = (int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        matrix[i] = (int*)malloc(m*sizeof(int));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int result = max_ones(matrix,n,m);
    printf("%d\n",result);


}
int lowerbound(int arr[],int m,int x){
    int low = 0;int high = m-1;int ans = m;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid - 1;
           
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
int max_ones(int **matrix,int n,int m){
    int max_cnt = 0;
    int index = -1;
    for(int i=0;i<n;i++){
        int cnt_ones = m - lowerbound(matrix[i],m,1);
        if(cnt_ones > max_cnt){
            max_cnt = cnt_ones;
            index = i;
        }

    }
    return index;
}