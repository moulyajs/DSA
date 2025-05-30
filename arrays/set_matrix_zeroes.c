#include <stdio.h>

//brute force solution
/*
void setRow(int i, int m, int* arr, int cols);
void setCol(int j, int n, int* arr, int cols);
void set_matrix_zeroes(int *arr, int n, int m);
int main(){
    int m,n;
    printf("enter no of rows\n");
    
    scanf("%d",&n);
    printf("enter no of columns\n");
    scanf("%d",&m);
    int arr[n][m];
    printf("enter matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   set_matrix_zeroes(&arr[0][0],n,m);
   printf("modified matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}
void setRow(int i,int m,int* arr,int cols){
    for(int j=0;j<m;j++){
        arr[i*cols+j] = -1;
    }
}
void setCol(int j,int n,int* arr,int cols){
    for(int i=0;i<n;i++){
        arr[i*cols+j] = -1;
    }
}
void set_matrix_zeroes(int *arr,int n,int m){
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i*m+j]==0){
                setRow(i,m,arr,m);
                setCol(j,n,arr,m);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i*m+j]==-1){
                arr[i*m+j]=0;
            }
        }
    }
    
}
*/
//better solution
/*
void set_matrix_zeroes(int *arr, int n, int m);
int main(){
    int m,n;
    printf("enter no of rows\n");
    
    scanf("%d",&n);
    printf("enter no of columns\n");
    scanf("%d",&m);
    int arr[n][m];
    printf("enter matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }                                  //time complexity :- O(2*m*n)
                                       //space complexity :- O(n)+O(m)
   set_matrix_zeroes(&arr[0][0],n,m);
   printf("modified matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}

void set_matrix_zeroes(int *arr,int n,int m){
    int cols[m];
    int rows[n];
    for(int i=0;i<n;i++){
        rows[i] = 0;
    }
    for(int i=0;i<m;i++){
        cols[i] = 0;
    }
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i*m+j]==0){
                rows[i]=1;
                cols[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(rows[i]==1 || cols[j]==1){
                arr[i*m+j]=0;
            }
        }
    }

}
*/


void set_matrix_zeroes(int *arr, int n, int m);
int main(){
    int m,n;
    printf("enter no of rows\n");
    
    scanf("%d",&n);
    printf("enter no of columns\n");
    scanf("%d",&m);
    int arr[n][m];
    printf("enter matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }                                  //time complexity :- O(2*m*n)
                                       //space complexity :- O(1)
   set_matrix_zeroes(&arr[0][0],n,m);
   printf("modified matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}

void set_matrix_zeroes(int *arr, int n, int m){
    int col0 = 1;
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            if(arr[i*m+j] == 0){
                    arr[i*m+0]=0;
                    if(j!=0){
                        arr[0*m+j]=0;
                    }
                    else{
                        col0 = 0;
                    }
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(arr[i*m+j] !=0){
                if(arr[0*m+j]==0||arr[i*m+0]==0){
                    arr[i*m+j]=0;
                }
            }
        }
    }
    if(arr[0*m+0]==0){
        for(int j=0;j<m;j++){
            arr[0*m+j]=0;
        }
    }
    if(col0==0){
        for(int i=0;i<n;i++){
            arr[i*m+0]=0;
        }
    }
}
