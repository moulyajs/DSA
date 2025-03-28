#include <stdio.h>
#include <string.h>
int main(){

    char str[100];
    scanf("%s",str);
    int hash[26]={0};
    for(int i=0;i<strlen(str);i++){            //for all characters : size is 256 and hash[str[i]]++  and it auto converts it to ascii value
        hash[str[i]-'a']++;
    }
    int m;
    scanf("%d",&m);
    while(m--){
        getchar();
        char character;
        scanf("%c",&character);
        printf("hash value");
        printf("%d\n",hash[character-'a']);
    }


}