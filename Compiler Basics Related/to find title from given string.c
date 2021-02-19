#include<stdio.h>
int main()
{
    int i;
    char str[100];
    printf("Enter some of strings:\n");
    scanf(" %[^_]",str);
    printf("Title of these strings is ");
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='\n')
        {
            break;
        }
        else
        {
            printf("%c",str[i]);
        }
    }
    printf("\n");
    return 0;
}

