#include <stdio.h>
#include <string.h>
int main()
{
    char txt[100];
    int count= 0;
    printf("Enter a Line of String:\n");
    gets(txt);
    for(int i=0; txt[i]!='\0'; i++)
    {
        count++;
    }
    printf("Length of given string is %d\n", count);
    printf("Reversed String: %s\n", strrev(txt));
    return 0;
}

