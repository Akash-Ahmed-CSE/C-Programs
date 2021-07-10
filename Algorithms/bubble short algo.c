#include<stdio.h>
int main()
{
    int n,A[100],i,j,temp;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if (A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
     for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }


    return 0;
}
