#include <stdio.h>
int main()
{
    int n,i,h,m,s;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d %d %d",&h,&m,&s);
        if (h<10)printf("0%d:",h);
        else printf("%d:",h);
        if (m<10)printf("0%d",m);
        else printf("%d",m);
        if (s==0)printf(" - A porta fechou!\n");
        else printf(" - A porta abriu!\n");
    }
    return 0;
}

