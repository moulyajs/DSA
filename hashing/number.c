#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;

    }
    int m;
    scanf("%d",&m);
    while(m--){
        int num;
        scanf("%d",&num);
        printf("hash value");
        printf("%d\n",hash[num]);
    }
}