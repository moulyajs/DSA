//best time to buy and sell stocks

#include <stdio.h>
int to_find_best_time_to_buyandsell_stocks(int arr[],int n);
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int maxprofit = to_find_best_time_to_buyandsell_stocks(arr,n);
    printf("%d\n",maxprofit);

}
int to_find_best_time_to_buyandsell_stocks(int arr[],int n){
    int maxProfit = 0;
    int min = arr[0];
    for(int i=0;i<n;i++){
        int cost = arr[i] - min;
        maxProfit = (cost > maxProfit)?cost:maxProfit;   //tc:-O(n) sc :- O(1)  dynamic programming:remembering past(here min value)
        min = (arr[i]<min)?arr[i] : min;
    }
    return maxProfit;
}