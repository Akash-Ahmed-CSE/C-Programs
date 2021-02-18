#include<stdio.h>
int main()
{
    int mat[7][7],row,col;
    printf("Enter the elements in 7X7 matrix:\n");
    for (row=0;row<7;row++)
    {
        for(col=0;col<7;col++)
        {
            scanf("%d",&mat[row][col]);
        }
    }
    printf("The Matrix is :\n");
    for (row=0;row<7;row++)
    {
        for(col=0;col<7;col++)
        {
            printf("%d\t",mat[row][col]);
        }
        printf("\n");
    }
    return 0;
}
