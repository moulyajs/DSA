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

    int row = 0;int col = m-1;
    while(row<n && col >=0){
        if(matrix[row][col] == k){
            return 1;
        }
        else if(matrix[row][col] < k){
            row++;
        }
        else{
            col--;
        }
    }
    return 0;
}