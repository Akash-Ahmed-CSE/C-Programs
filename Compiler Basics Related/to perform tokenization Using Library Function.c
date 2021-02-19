#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    printf("Enter a Line of String:\n");
    gets(a);
    const char b[10] = " ";
    char* tok;
    tok = strtok(a, b);
    printf("Tokenized Strings: \n");
    while (tok != 0) {
        printf("%s\n", tok);
        tok = strtok(0, b);
    }
    return (0);
}

