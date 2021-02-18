#include<stdio.h>
int main()
{
    int tn, total,n;
    printf("Enter the length: \n");
    scanf("%d",&tn);
    int i,arr[tn];
    printf("enter the coins in Descending order :\n");
    for(i=0;i<tn;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the amount :\n");
    scanf("%d",&total);
    for(i=0;i<tn;i++){
        if (total>=arr[i]){
            n=total/arr[i];
            printf("%d is needed %d times\n",arr[i],n);
            total = total - n * arr[i];
        }
    }
    return 0;
}
