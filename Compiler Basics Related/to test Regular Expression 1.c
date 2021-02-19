//For aa(b|c)*dd
#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1000];

    printf("Regular Expression: aa(b|c)*dd\n");
    printf("Enter Text To Check:\n");
    gets(ch);

    unsigned int l = strlen(ch);

    if(ch[0] == 'a' && ch[1] == 'a' && ch[l-2] == 'd' && ch[l-1] == 'd'){
        printf("Result: Accepted!");
    } else {
        printf("Result: Not Accepted!");
    }

    return 0;

}
