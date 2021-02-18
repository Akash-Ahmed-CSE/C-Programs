#include<stdio.h>
int main()
{
    int arr[50],n,x,first,last,mid,flag=0,i;

    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to search:");
    scanf("%d",&x);
    first =0;
    last = n-1;
    while(first<=last){
        mid = (first+last)/2;
        if (x==arr[mid]){
            flag =1;
            break;
        }
        else if (x>arr[mid])first = mid+1;
        else last = mid -1;
    }
        if(flag==1)
            printf("fount");
        else
        printf("not fount");
    return 0;
}
