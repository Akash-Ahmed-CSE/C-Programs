#include<stdio.h>
int main()
{

    int A[10][10],T[10][10],i,j,col,row;
    printf("Enter the row and the columns of the matrix: ");
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++){
        for (j=0;j<col;j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
  }

    for(i=0;i<row;i++){
        for (j=0;j<col;j++){
            printf("%d",A[i][j]);
        }printf("\n");
  }
    printf("Transpose Matrix :");
     for(i=0;i<row;i++){
            for (j=0;j<col;j++){
                T[j][i]=A[i][j];
            }
            printf("\n");
        }

         for(i=0;i<col;i++){
            for (j=0;j<row;j++){
               printf("%d",T[i][j]);
            }
            printf("\n");
        }



    return 0;
}
