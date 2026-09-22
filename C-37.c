#include<stdio.h>
int main(){
    char s[50]="Aditya";
    int i=0;
    while(s[i]!='\0'){
        printf("%c",s[i]);
        i++;
    }
    printf("\nenter length of string");
    printf("%d",strlen(s));
    return 0;
}
