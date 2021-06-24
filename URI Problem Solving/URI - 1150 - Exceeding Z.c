#include<stdio.h>
int main()
{
    int x,z,c=0,a=1,i;
    scanf("%d %d",&x,&z);
    while (z<=x)scanf("%d",&z);
    for (i=x;i<=z;i++){
        c+=i;
        if (c>z)break;
        a++;
    }
    printf("%d\n",a);
    return 0;
}

