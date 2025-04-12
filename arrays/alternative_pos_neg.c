
//for equal number of positive and negative values
//brute force
/*
#include <stdio.h>
void rearrange_pos_neg_values(int n,int arr[]);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    rearrange_pos_neg_values(n,arr);
    
}
void rearrange_pos_neg_values(int n,int arr[]){
    int pos[n/2];
    int neg[n/2];int p = 0,q=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            neg[q++]=arr[i];
        }
        else{
            pos[p++]=arr[i];    //tc :- O(n+n/2) sc :- O(n)
        }
    }
    for(int i=0;i<n/2;i++){
        arr[2*i]= pos[i];
        arr[2*i+1]=neg[i];
    }
     printf("after rearrangment\n");
    for(int i=0;i<n;i++){
       
        printf("%d\n",arr[i]);
    }
}
*/

//optimal solution
/*
#include <stdio.h>
#include <stdlib.h>
int* rearrange_pos_neg_values(int n,int arr[]);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *result = rearrange_pos_neg_values(n,arr);
     for(int i=0;i<n;i++){
       
        printf("%d\n",result[i]);
    }
    
}
int* rearrange_pos_neg_values(int n,int arr[]){
    int *result=(int*)malloc(n*sizeof(int));
    int posindex = 0;int negindex = 1;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            result[negindex]=arr[i];
            negindex +=2;
        }
        else{
            result[posindex]=arr[i];
            posindex +=2;
        }
    }
    return result;

}
*/

#include <stdio.h>
void rearrange_pos_neg_values(int n,int arr[]);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    rearrange_pos_neg_values(n,arr);
    
}
void rearrange_pos_neg_values(int n,int arr[]){
    int pos[n/2];
    int neg[n/2];int pos_size = 0,neg_size=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            neg[neg_size++]=arr[i];
        }
        else{
            pos[pos_size++]=arr[i];
        }
    }
    if(pos_size>neg_size){
    for(int i=0;i<neg_size;i++){
        arr[2*i]= pos[i];
        arr[2*i+1]=neg[i];
    }
    int index = neg_size*2;
    for(int i = neg_size;i<pos_size;i++){
        arr[index]=pos[i];
        index++;
    }
    }               //tc:- O(2n)  sc:-O(n)
    else{
        for(int i=0;i<pos_size;i++){
        arr[2*i]= pos[i];
        arr[2*i+1]=neg[i];
    }
    int index = pos_size*2;
    for(int i = pos_size;i<neg_size;i++){
        arr[index]=neg[i];
        index++;
    }


    }
     printf("after rearrangment\n");
    for(int i=0;i<n;i++){
       
        printf("%d\n",arr[i]);
    }
}