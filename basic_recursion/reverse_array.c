

/*
#include <stdio.h>

void reverse_array(int l,int r,int a[]);
void swap(int *a,int *b);
int main(){

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    reverse_array(0,n-1,a);
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }

    printf("\n");
}

void reverse_array(int l,int r,int a[]){
    if(l>=r){
        return;
    }
    else{
        swap(&a[l],&a[r]);
        reverse_array(l+1,r-1,a);
    }
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
*/

#include <stdio.h>
void reverse_array(int i,int n,int a[]);
void swap(int *a,int *b);
int main(){

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    reverse_array(0,n,a);
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }

    printf("\n");
}

void reverse_array(int i,int n,int a[]){
    if(i>= n/2){
        return;
    }
    else{
        swap(&a[i],&a[n-i-1]);
        reverse_array(i+1,n,a);
    }
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
