#include<stdio.h>
int main()
{
    int n,i,min,min_pos,start,temp,step;
    scanf("%d",&n);
    int arr[n+1];
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);

        for(step=1;step <=n;step++){
            start=step;
            min=arr[start];
            min_pos= start;
            for(i=start+1;i<=n;i++){
                if(arr[i]<min)
                {
                    min= arr[i];
                    min_pos=i;
                }
            }
            {
                temp = arr[start];
                arr[start]= arr[min_pos];
                arr[min_pos]= temp;
            }
        }
            for(i=1;i<=n;i++)
                printf("%d ",arr[i]);
        return 0;
}
