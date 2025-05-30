#include <stdio.h>
#include <stdlib.h>
//brute force solution
/*
void rotate(int** matrix, int matrixSize, int* matrixColSize);
int main(){
     int m,n;
    printf("enter no of rows\n");
    
    scanf("%d",&n);
    printf("enter no of columns\n");
    scanf("%d",&m);
    
    
    int** matrix = (int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        matrix[i]= (int*)malloc(m*sizeof(int));
    }
    printf("enter matrix\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    //int** matrix2 = rotate(matrix, n, &m);
    rotate(matrix, n, &m);
    printf("Modified matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;

}

void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int m = *matrixColSize;
    //int** matrix2=(int**)malloc(matrixSize*sizeof(int*));
    //for(int i=0;i<matrixSize;i++){
    //    matrix2[i]= (int*)malloc(m*sizeof(int));
   // };
    int matrix2[matrixSize][m];
    for(int i=0;i<matrixSize;i++){
        for(int j=0;j<m;j++){
            matrix2[j][m-i-1] = matrix[i][j];      //TC:- O(n²)  SC:- O(n²)
        }
    }
    for(int i=0;i<matrixSize;i++){
        for(int j=0;j<m;j++){
            matrix[i][j]= matrix2[i][j];
        }
    }
   //return matrix2;
}
*/
//optimal solution

void rotate(int** matrix, int matrixSize, int* matrixColSize);
int main(){
     int m,n;
    printf("enter no of rows\n");
    
    scanf("%d",&n);
    printf("enter no of columns\n");
    scanf("%d",&m);
    
    
    int** matrix = (int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        matrix[i]= (int*)malloc(m*sizeof(int));
    }
    printf("enter matrix\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    rotate(matrix, n, &m);
    printf("Modified matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;

}

void rotate(int** matrix, int matrixSize, int* matrixColSize){
    int m = *matrixColSize;

    for(int i=0;i<matrixSize-1;i++){
        for(int j=i+1;j<m;j++){     //should be square matrix
            
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            
        }                                 //tc :- O(n²) sc:- O(1)
    }
    //reverse 
    for(int i=0;i<matrixSize;i++){
    int p1 = 0;int p2 = matrixSize-1;
    while(p1 < p2){
        int temp2 = matrix[i][p1];
        matrix[i][p1] = matrix[i][p2];
        matrix[i][p2] = temp2;
        p1++;
        p2--;
    }
    }
}