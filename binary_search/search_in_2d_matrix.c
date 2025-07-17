#include <stdio.h>
#include <stdlib.h>
int search(int **matrix,int n,int m,int k);
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
    int k;
    scanf("%d",&k);
    int result = search(matrix,n,m,k);
    printf("%d\n",result);


}

int search(int **matrix,int n,int m,int k){
    int low = 0;int high = (m*n)-1;
    while(low<=high){

        int mid = (low+high)/2;
        int row = mid / m;int col = mid % m ;
        if(matrix[row][col] == k){
            return 1;
        }
        else if(matrix[row][col] < k){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }

    }
    return 0;
}