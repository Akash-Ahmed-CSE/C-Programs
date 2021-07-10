#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n+1];
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }

    //////shorting algorithm/////////


    int step;
    for(step=1;step<=n;step++){
        int start , min ,min_pos;
        start=step;
        min= arr[start];
        min_pos=start;
        for(i=start+1;i<=n;i++){
           if(arr[i]<min){
            min=arr[i];
            min_pos=i;
            //swap(arr[start],arr[min_pos]);
            int temp = arr[start];
            arr[start]=arr[min_pos];
            arr[min_pos]=temp;
           }
        }

    }

    for(i=1;i<=n;i++){
        printf("%d ",arr[i]);
    }
///////////////////////////////////////
 printf("\nEnter the element to search:");
 int x, flag =0;
    scanf("%d",&x);
    int first,last,mid;
    first=1;
    last=n;
    while(first<=last){
        mid = (first+last)/2;
        if(arr[mid]==x) flag = 1;
        break;
        if(x>arr[mid]) first= mid+1;
        else last = mid-1;

    }

    if (flag==1)printf("%x is found at %d",x,mid);
    else printf("%d is not found\n",x);


    return 0;
}
