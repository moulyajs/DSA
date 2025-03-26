#include <stdio.h>
#include <string.h>
_Bool string_palindrome(int i,char str[]);
int main(){
    int i;
    char str[10];
    scanf("%s",str);
    int result = string_palindrome(0,str);
    printf("%d\n",result);

}

_Bool string_palindrome(int i,char str[]){
  if(i>= strlen(str)/2){
    return 1;
  }
  if(str[i] != str[strlen(str)-i-1]){
    return 0;
  }
  else{
    return string_palindrome(i+1,str);
  }
}