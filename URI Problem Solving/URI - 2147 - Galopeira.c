#include<stdio.h>
#include <string.h>
int main()
{
    int n,i,v;
    char akash[10100];
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%s",akash);
        v=strlen(akash);
        printf("%.2lf\n",v*.01);
    }
    return 0;
}

