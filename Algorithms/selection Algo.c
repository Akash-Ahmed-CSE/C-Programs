#include<stdio.h>
int main()
{
    int i,j,A[10],index,n;
    printf("Enter the size of the array:");

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);

    }
    printf("Enter the elements:");
    for(i=0;i<n-1;i++){
        index = i;
        for(j=i+1;j<n;j++){
            if(A[j]>A[index]){
                index = j;
            }
        }
        if (index!=i){
            int temp = A[i];
            A[i]=A[index];
            A[index]=temp;
        }
    }
      for(i=0;i<n;i++){
        printf("%d ",A[i]);

    }


    return 0;
}
