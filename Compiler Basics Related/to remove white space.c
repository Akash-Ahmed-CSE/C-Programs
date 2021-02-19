#include <stdio.h>
int main()
{
    char s[100];
    int k=0;
    printf("Enter a Line of String: \n");
    gets(s);
    for(int i=0; s[i]; i++)
    {
        s[i]=s[i+k];
        if(s[i]==' '|| s[i]=='\t')
        {
            k++;
            i--;
        }
    }
    printf("'%s' is the given string without White Spaces. \n", s);
    return 0;
}

