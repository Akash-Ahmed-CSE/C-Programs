#include <stdio.h>
#include <mem.h>
#include <ctype.h>
int main() {
    int i, flag = 0;
    char keyword[32][100] = {"auto", "break", "case", "char", "const","continue","default", "do", "double", "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register", "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"}, a[100];
    printf("Enter String to Check Identifier or Keyword: ");
    gets(a);
    for(i = 0; i < 32; ++i) {
        if((strcmp(keyword[i], a) == 0)) {
            flag = 1;
        }
    }
    if(flag == 1) {
        printf("\n%s is keyword.", a);
    }
    else {
        flag = 0;
        if((a[0] == '_') || (isalpha(a[0]) != 0)) {
            for(i = 1; a[i] != '\0'; ++i) {
                if((isalnum(a[i]) == 0) && (a[i] != '_')) {
                    flag = 1;
                }
            }
        }
        else {
            flag = 1;
        }
    }
    if(flag == 0) {
        printf("\n%s is an Identifier.", a);
    }
    else {
        printf("\n%s is Not an Identifier.", a);
    }
    return 0;
}

