#include <stdio.h>
#include <stdbool.h>
bool isAnagram(char* s, char* t);
int main(){
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    char s[n];
    char t[m];
    scanf("%s",s);
    scanf("%s",t); 
    int result = isAnagram(s,t);
    if (result) {
    printf("true\n");
} else {
    printf("false\n");
}

}

bool isAnagram(char* s, char* t) {
    int s_arr[26]= {0};
    int t_arr[26] = {0};int i=0;int j=0;
    while(s[i] != '\0'){
        s_arr[s[i] - 'a'] += 1 ;
        i++;
    }
    while(t[j] != '\0'){
        t_arr[t[j] - 'a'] += 1;
        j++;
    }
    for(int k=0;k<26;k++){
        if(s_arr[k] != t_arr[k]){
            return false;
        }
    }
    return true;
}