#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,row,col;
    printf("Enter the number of row and column :");
    scanf("%d %d",&row,&col);

    printf("Enter the number of A matrix:\n");

    for(i=0;i<row;i++){
        for (j=0;j<col;j++){
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

     printf("Enter the number of B matrix:\n");

    for(i=0;i<row;i++){
        for (j=0;j<col;j++){
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");

    for(i=0;i<row;i++){
        for (j=0;j<col;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("A matrix : \n");
    for(i=0;i<row;i++){
        for (j=0;j<col;j++){

            printf("%d",a[i][j]);
        }
        printf("\n");
    }
      printf("B matrix : \n");
     for(i=0;i<row;i++){
        for (j=0;j<col;j++){

            printf("%d",b[i][j]);
        }
        printf("\n");
    }
     printf("C matrix : \n");
   for(i=0;i<row;i++){
        for (j=0;j<col;j++){

            printf("%d",c[i][j]);
        }printf("\n");

    }
    return 0;
}
