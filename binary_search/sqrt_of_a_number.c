#include <stdio.h>
int sqrt_of(int n);
int main(){
    int n;
    scanf("%d",&n);
    int result = sqrt_of(n);
    printf("%d\n",result);
}
int sqrt_of(int n){
    int low = 1;int high = n;
    int ans = 1;
    while(low<=high){
        long long  mid = (low+high)/2;
        long long val = (mid * mid);
        if(val <= n){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }

    }
    return ans;
}