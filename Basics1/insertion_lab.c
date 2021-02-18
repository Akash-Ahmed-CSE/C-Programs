#include<stdio.h>///insertion
int main()
{
    int n,arr[50], i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=1;i<=n-1;i++){
        for(j=i;j>0 && arr[j]< arr[j-1];j--){
        temp = arr[j];
        arr[j]=arr[j-1];
        arr[j-1]= temp;
    }
}

for(i=0;i<=n-1;i++)
        printf("%d ",arr[i]);

return 0;
}
