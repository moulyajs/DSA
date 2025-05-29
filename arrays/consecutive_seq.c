//longest consecutive sequence
//brute force
/*
#include <stdio.h>
int longest_consecutive_sequence(int arr[],int n);
int linear_search(int arr[],int n,int value);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result = longest_consecutive_sequence(arr,n);
    printf("result:-%d\n",result);

}
int linear_search(int arr[],int n,int value){
    for(int i=0;i<n;i++){
        if(arr[i]==value){
            return 1;
        }
    }
    return 0;
}
int longest_consecutive_sequence(int arr[],int n){
        
        int longest = 1;
        for(int i=0;i<n;i++){
            int x = arr[i];
            int count = 1;
            while(linear_search(arr,n,x+1)){
                x+=1;
                count+=1;
            }
            if(count > longest){
                longest = count;
                
                
            }
            
        }
        return longest;
}
*/

//better solution
/*
#include <stdio.h>
#include <limits.h>
void merge(int arr[],int low,int mid,int high);
void mergesort(int arr[],int low,int high);
int longest_consecutive_sequence(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mergesort(arr,0,n);
    int result = longest_consecutive_sequence(arr,n);
    printf("result:-%d\n",result);

}
void mergesort(int arr[],int low,int high){
    if(low>=high){
        return;
    }
    int mid = (low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

void merge(int arr[],int low,int mid,int high){
        int temp[high-low+1];
        int left = low;
        int right = mid + 1;
        int k =0;
        while(left <= mid && right <= high){
            if (arr[left]<= arr[right]){
                temp[k++]=arr[left++];

            }
            else{
                temp[k++]=arr[right++];
            }
        }

        while(left <= mid){
                temp[k++]=arr[left++];

        }

        while(right<=high){
                 temp[k++]=arr[right++];
        }
         for (int i = 0; i < k; i++) {
        arr[low + i] = temp[i];
    }

}
int longest_consecutive_sequence(int arr[],int n){
        int last_smallest = INT_MIN;
        int count = 0;
        int longest = 1;int k =0;
         for(int i=0;i<n;i++){
            if(arr[i]- 1 == last_smallest){
                count = count+1;
                last_smallest = arr[i];
            }
            else if (arr[i] != last_smallest){
                count = 1;
                last_smallest = arr[i];
            }
            longest = count > longest ? count : longest;
        
         }
       return longest;
}

*/

#include <stdio.h>
int longest_consecutive_sequence(int arr[],int n);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result = longest_consecutive_sequence(arr,n);
    printf("result:-%d\n",result);
}
int linear_search(int arr[],int n,int value){
    for(int i=0;i<n;i++){
        if(arr[i]==value){
            return 1;
        }
    }
    return 0;
}
int longest_consecutive_sequence(int arr[],int n){
    int longest = 0;
    for(int i=0;i<n;i++){
        int current = arr[i];
        
        if(!linear_search(arr,n,current - 1)){      //set with this logic will reduce the time complexity and can be a optimal solution
            int count = 1;
            int next = current+1;
            while(linear_search(arr,n,next)){
                count++;
                next++;
            }
          if(count > longest){
            longest = count;
          }
        }


    }
    return longest;
}