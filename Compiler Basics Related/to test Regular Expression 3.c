//For a(a|b|c)*bcc
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];

    printf("Regular Expression: a(a|b|c)*bcc\n");
    printf("Enter Text To Check:\n");
    gets(ch);

    unsigned int l = strlen(ch);

    if (ch[l-3] == 'b' && ch[l-2] == 'c' && ch[l-1] == 'c'){
        printf("Result: Accepted!");
    } else {
        printf("Result: Not Accepted!");
    }

    return 0;
}

