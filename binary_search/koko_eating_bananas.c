#include <stdio.h>
#include <math.h>
int min_per_hour(int arr[],int n,int h);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int h;
    printf("enter h\n");
    scanf("%d",&h);
    int k = min_per_hour(arr,n,h);
    printf("%d\n",k);

}
int func(int arr[],int hourly,int n){
    int totalhrs = 0;
    for(int i=0;i<n;i++){
        totalhrs += ceil((float)arr[i]/hourly);

    } 
    return totalhrs;
}
int min_per_hour(int arr[],int n,int h){
        int maximum = -1;
        for(int i = 0;i<n;i++){
            if(arr[i] > maximum){
                maximum = arr[i];
            }
        }
        int low = 1 ; int high = maximum;int ans;
        while(low<=high){
            int mid = (low+high)/2;
            int totalhrs = func(arr,mid,n);
            if(totalhrs <= h){
                 ans = mid;
                high =  mid - 1;


            }
            else{                  //tc:- O(n)* log(maxele)
                low = mid + 1;
            }
        
        }
    return ans ;//or low
}
/*
long long func(int arr[], int hourly, int n) {
    long long totalhrs = 0;
    for (int i = 0; i < n; i++) {
        totalhrs += (arr[i] + hourly - 1) / hourly;  //integer safe version 
    }
    return totalhrs;
}

*/