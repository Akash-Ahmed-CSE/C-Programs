#include<stdio.h>
int main()
{
    int i=0;
    char s[50];
    printf("Enter a Line of String:\n");
    gets(s);
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
            s[i]='\n';
        }
        i++;
    }
    printf("Tokenized Strings:\n");
    printf("%s", s);
    return 0;
}

