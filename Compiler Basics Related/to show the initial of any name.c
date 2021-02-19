#include<stdio.h>
int main()
{
    char a[100];
    printf("Enter Any Name:\n");
    gets(a);
    printf("Initialed Name:\n");
    printf("%c",a[0]);
    for(int i = 1; a[i]; i++)
        if(a[i]==' ')
            printf("%c",a[i+1]);
    printf("\n");
    return 0;
}

