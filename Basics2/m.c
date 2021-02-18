#include<stdio.h>
int main()
{
    int mat[5][5];
    int r,c;
    for(r=0;r<5;r++){
        for(c=0;c<5;c++)
        {
            scanf("%d",&mat[r][c]);
        }
    }
    for (r=0;r<5;r++)
    {
        for (c=0;c<5;c++)
        {
            printf("%d ",mat[r][c]);
        }
        printf("\n");
    }
    return 0;
}

