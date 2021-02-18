#include<stdio.h>
int main()
{
    int sum =0,f[10][10],s[10][10],r[10][10],r1,r2,c1,c2,i,j,k;

    printf("Enter row and column for the 1st matrix :\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter row and column for the 2nd matrix :\n");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error !! Column of first matrix not equal to row of second matrix:\n");
        printf("Enter row and column for the 1st matrix :\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter row and column for the 2nd matrix :\n");
    scanf("%d %d",&r2,&c2);
    }
    printf("\nFirst Matrix :\n");
    // 1st matrix
    for(i=0;i<r1;i++){

        for(j=0;j<c1;j++){
            printf("First[%d][%d] = ",i,j);
            scanf("%d",&f[i][j]);
        }
        }
        // 2nd matrix
         printf("\nSecond Matrix :\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
             printf("Second[%d][%d] = ",i,j);
            scanf("%d",&s[i][j]);
        }
    }
    printf("\nFirst Matrix:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d ",f[i][j]);
        }
        printf("\n");
    }
        printf("\nSecond Matrix:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
  //multiplication

     for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<c1;k++){
               sum=sum + f[i][k] * s[k][j];
            }
            r[i][j] = sum;
               sum=0;
        }
     }
printf("Result Matrix :\n");
 for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }
    return 0;
}

