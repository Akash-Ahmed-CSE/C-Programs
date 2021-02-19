#include<stdio.h>
int main()
{
    char a[100];
    printf("Enter Any Three Letters: \n");
    gets(a);
    printf("Subsequent Letters:\n");
    for(int i=0 ; a[i]; i++)
    {
        if(a[i]>='A' && a[i]<='Z' && a[i]>87)
            printf("%c",a[i]-23);
        else if(a[i]>='a' && a[i]<='z' && a[i]>119)
            printf("%c",a[i]-23);
        else
            printf("%c",a[i]+3);
    }
    printf("\n");
    return 0;
}

