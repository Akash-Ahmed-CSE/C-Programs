#include<stdio.h>

int main()
{
    int j = 0;
    char a[9999], b[9999];
    printf("Enter a Line of String: \n");
    gets(a);
    for(int i = 0; a[i]; i++)
    {
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9'))
            b[j++]=a[i];
    }
    b[j]='\0';
    printf("'%s' is the given string without Special Characters.\n", b);
    return 0;
}
