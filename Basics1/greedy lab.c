#include<stdio.h>
int main()
{
    int n,i,total,m,arr[50];
    printf("Enter the number of coins :\n");
    scanf("%d",&n);
    printf("Enter the coins in descending order :\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the total amount :\n");
    scanf("%d",&total);
    for(i=0;i<n;i++){
        if (total > arr[i]){
            m=total/arr[i];
            printf("%d is needed %d times \n",arr[i],m);
            total = total - m*arr[i];
        }
    }
    return 0;
}
