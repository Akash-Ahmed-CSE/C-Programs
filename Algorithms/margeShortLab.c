#include<stdio.h>
void marge(int arr[], int l ,int m,int r)
{
    int i,j,k;
    int n1= m-l+1;
    int n2=r-m;
    int L[n1];
    int R[n2];
    for(i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(j=0;j<n2;j++)
        R[j]= arr[m+1+j];

    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else {
            arr[k]= R[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k]= L[i];
        i++;
        k++;
    }
    while (j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}


void mergeShort(int arr[], int l,int r)
{
    if(l<r){
        int m = l+(r-l)/2;
        mergeShort(arr,l,m);
        mergeShort(arr,m+1,r);
        marge(arr,l,m,r);
    }
}
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
        scanf("%d",&arr[i]);
    mergeShort(arr,0,a-1);
    for(i=0;i<a;i++)
        printf("%d ",arr[i]);
    return 0;
}
