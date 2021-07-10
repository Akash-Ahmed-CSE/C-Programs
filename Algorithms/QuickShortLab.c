#include<stdio.h>
int divide(int arr[],int l,int r)
{
    int p = arr[l];
    while (l<=r){
        if(arr[l]==p){
            if(p<=arr[r]){
                r--;}
            else {
                int temp = arr[l];
                arr[l]= arr[r];
                arr[r]= temp;
                l++;
            }
        }
        else if (arr[r]==p){
            if(arr[l]<=p){
                l++;
            }
            else {
                int temp = arr[l];
                arr[l]= arr[r];
                arr[r]= temp;
                r--;
            }
        }
    }
    return l;
}


void quickShort(int arr[], int l,int r)
{

    if(l<r){
        int d = divide(arr,l,r);
        quickShort(arr,l,d-1);
        quickShort(arr,d+1,r);
    }
}


int main()
{
    int i ,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    quickShort(arr,0,n-1);

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
