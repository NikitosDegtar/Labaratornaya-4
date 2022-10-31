#include <stdio.h>
 
const int alph_length = 26;
 
 
int main() {
    int i;
    char text[81];
    char *p;
    
    int letters_encountered[alph_length];
 
    for(i = 0;i< alph_length ; i++ ) 
         letters_encountered[i]=0;
 
    fgets(text,80,stdin);
 
    p = text;
 
    while(*p!=0) {
        if(*p< 'a' || *p > 'z') {
 
            p++;
            continue;
        };
 
        letters_encountered[*(p++) -'a']++;
    };
 
    for(i=0;i<alph_length;i++) { 
        if(letters_encountered[i]==1)
            printf("%c",'a'+(char)i);
 
    };
    return 0;
};