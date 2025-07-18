#include <stdio.h>
#include <stdlib.h>
 int* peak_element(int** matrix,int n,int m);
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
    

    int *result = peak_element(matrix,n,m);
    for(int i=0;i<2;i++){
    printf("%d\n",result[i]);
    }


}
int findMaxIndex(int** matrix,int n,int m,int col){
    int maxValue = -1;
    int index = -1;
    for(int i=0;i<n;i++){
        if(matrix[i][col] > maxValue){
            maxValue = matrix[i][col];
            index = i;
        }
    }
    return index;
}
 int* peak_element(int** matrix,int n,int m){
    int *result = (int*)malloc(2*sizeof(int));
   
    int low =0;int high = m -1;
    while(low<=high){
        int mid = (low+high)/2;
        int maxRowIndex = findMaxIndex(matrix,n,m,mid);
        int left = mid - 1 >= 0 ? matrix[maxRowIndex][mid - 1] : -1;
        int right = mid + 1 < m ? matrix[maxRowIndex][mid+1]:-1;
        if(matrix[maxRowIndex][mid] > left && matrix[maxRowIndex][mid] > right){
            result[0] = maxRowIndex;
            result[1] = mid;
            return result;
        }
        else if(matrix[maxRowIndex][mid] < left) {
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
     result[0] = -1;
    result[1] = -1;
    return result;
 }