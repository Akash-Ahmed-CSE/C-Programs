#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5], i, j, tmp;

    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(a[j] <a[i])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for(i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
