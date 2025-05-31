//spiral traversal of a matrix
#include <stdio.h>
#include <stdlib.h>
int* spiral(int** matrix,int rows,int* cols,int* returnSize);
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
    int returnSize = 0;
    int* output_array = spiral(matrix, n, &m,&returnSize);
    printf("output array:\n");
    for(int i = 0;i<returnSize;i++){
        printf("%d ",output_array[i]);
    }
    printf("\n");
    
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
    free(output_array);
    return 0;

}
int* spiral(int** matrix,int rows,int* cols,int* returnSize){
        int n = rows;
        int m = *cols;
        *returnSize = n*m;
        int top = 0,bottom = n-1,left = 0,right = m-1;
        int* output_array = (int*)malloc(sizeof(int)*n*m);
        int k=0;

    while(top <= bottom && left <= right){
        for(int i=left;i<=right;i++){
            output_array[k] = matrix[top][i];
            k++;
        }
        top++;
        for(int i= top;i<=bottom;i++){
            output_array[k] = matrix[i][right];
            k++;
        }
        right--;
        if(top<=bottom){
        for(int i= right;i>= left;i--){
            output_array[k] = matrix[bottom][i];
            k++;
        }
        
        bottom--;
        }
        if(left <= right){
        for(int i = bottom;i>=top;i--){
            output_array[k] = matrix[i][left];
            k++;
        }
 
        left++;
        }
    }
    return output_array;
}