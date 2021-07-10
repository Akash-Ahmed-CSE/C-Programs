#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the order of N in a square matrix: \n");
    scanf("%d",&n);
    int mat[n+1][n+1];
    for (i=1;i<=n;i++){
        for (j=1;j<=n;j++){
            mat[i][j]=0;
        }
    }
    int ne;
    printf("How many edge:\n");
    scanf("%d",&ne);
    for (i=1;i<=ne;i++){
        int u,v;
        scanf("%d %d",&u,&v);
        mat[u][v]++;
        mat[v][u]++;
    }
    for (i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
