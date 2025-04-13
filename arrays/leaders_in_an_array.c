
//brute force
/*
#include <stdio.h>
void  findLeadersInAnArray(int n,int arr[]);
int main(){
      int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
 findLeadersInAnArray(n,arr);
   
    
}
void findLeadersInAnArray(int n,int arr[]){
    int k =0;
    int result[k];
    for(int i=0;i<n;i++){
        int leader = 1;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                leader = 0;    //tc :- O(n²)  sc :- O(n)
                break;
            }
        }
        if(leader == 1){
            result[k]=arr[i];
            k++;
        }
    }
    printf("leaders\n");
    for(int i=0;i<k;i++){
        printf("%d\n",result[i]);
    }
}
*/

//optimal solution
#include <limits.h>
#include <stdio.h>
void  findLeadersInAnArray(int n,int arr[]);
int main(){
      int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
 findLeadersInAnArray(n,arr);
   
    
}

void  findLeadersInAnArray(int n,int arr[]){
    int max = INT_MIN;int k=0;
    int result[k];
    for(int i=n-1;i>=0;i--){
        if(arr[i]>max){
            result[k]=arr[i];   //tc :- O(n)
            k++;
        }
        max = arr[i]>max ? arr[i]:max;
    }
    printf("leaders\n");
    for(int i=0;i<k;i++){
        printf("%d\n",result[i]);
    }
}