/*

#include <stdio.h>
void print_n(int i,int n);
int main(){
    int n;
    scanf("%d",&n);
    print_n(n,n);
}
void print_n(int i,int n){
    if(i<1){
        return ;
    }
    else{
        printf("%d\n",i);
        print_n(i-1,n);
    }
}
*/

#include <stdio.h>
void print_n(int i,int n);
int main(){
    int n;
    scanf("%d",&n);                 
    print_n(1,n);

}

void print_n(int i,int n){
    if(i>n){
        return;
    }
    else{          
      
        print_n(i+1,n);
          printf("%d\n",i);
    }
}