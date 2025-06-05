#include <stdio.h>
#include  <stdlib.h>
//given row and col find the element at that place
/*
int ncr(int n,int r);
int main(){
    int col , row;
    printf("enter row:");
    scanf("%d",&row);
    printf("enter column:");
    scanf("%d",&col);
    int res = ncr(row-1,col-1);
    printf("res:%d\n",res);

}
int ncr(int n,int r){
    int res = 1;
    for(int i=0;i<r;i++){
        res = res * (n-i);  //tc:- O(n) sc:- O(1)
        res = res/(i+1);
    }
    return res;
}
*/
//nth row  ----> n elements
//brute force
/*
void n_elements(int n);
int main(){
        int n;
        scanf("%d",&n);
        n_elements(n);

}
int ncr(int n,int r){
    int res = 1;
    for(int i=0;i<r;i++){
        res = res * (n-i);  
        res = res/(i+1);
    }
    return res;
}
void n_elements(int n){

    for(int c = 1;c<=n;c++){
        printf("%d ",ncr(n-1,c-1));   //tc:-O(n*r)
    }
    printf("\n");
}
*/
//optimal solution
/*
void n_elements(int n);
int main(){
        int n;
        scanf("%d",&n);
        n_elements(n);

}

void n_elements(int n){
    int ans = 1;
    printf("%d ",ans);
    for(int i = 1;i<n;i++){
        ans = ans * (n-i);
        ans = ans / i;        //tc:-O(n) sc:-O(1) 
        printf("%d ",ans);
    }

    printf("\n");
}

*/

//given n, print entire pascal triangle

int** generate(int numRows,int* returnSize , int** returnColSizes){
            *returnSize = numRows;
            *returnColSizes = (int*)malloc(sizeof(int) * numRows);
            int**  triangle = (int**)malloc(sizeof(int*) * numRows);
            for(int i=0;i<numRows;i++){
                (*returnColSizes)[i] = i+1;
                triangle[i] = (int*)malloc(sizeof(int) * (i+1));

                 triangle[i][0] = 1;
                 triangle[i][i] = 1;

                 for(int j = 1;j<i;j++){
                    triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
                 }
            }

            return triangle;

}

#include <stdio.h>

int main() {
    int numRows = 5;
    int returnSize;
    int* returnColumnSizes;

    int** result = generate(numRows, &returnSize, &returnColumnSizes);

    
    for (int i = 0; i < returnSize; i++) {
        for (int j = 0; j < returnColumnSizes[i]; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
        free(result[i]);  
    }

    free(result);              
    free(returnColumnSizes);   

    return 0;
}
