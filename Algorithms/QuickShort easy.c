#include<stdio.h>

int divide(int ar[],int left,int right)
{
    int pivot=ar[left];
    while(left<=right)
    {
        if(ar[left]==pivot)
        {
            if(pivot<=ar[right])
                right--;
            else
            {

                int temp = ar[left];
                ar[left]= ar[right];
                ar[right]=temp;

                pivot=ar[right];
                left++;
            }
        }
        else if(ar[right]==pivot)
        {
            if(ar[left]<=pivot)
                left++;
            else{
                int temp = ar[left];
                ar[left]= ar[right];
                ar[right]=temp;

                pivot=ar[left];
                right--;
            }

        }
    }
    return left;
}
void quickSort(int ar[],int left ,int right)
{
    if(left<right)
    {
        int d=divide(ar,left,right);
        quickSort(ar,left,d-1);
        quickSort(ar,d+1,right);
    }
}



int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     quickSort(arr,0,n-1);
     for(i=0;i<n;i++){
        printf("%d ",arr[i]);
     }
    return 0;
}






