#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,i ;
    scanf("%d",&n);
    int ar[n+1];
    for(i=1;i<=n;i++){
        scanf("%d",&ar[i]);
    }
    int step;
    for(step=1;step<=n;step++){
        printf("\n");
        int start,min,min_pos;
        start= step;
        min=ar[start];
        min_pos=start;
            for (i=start+1;i<=n;i++){

            if(ar[i]>min){
                min= ar[i];
                min_pos=i;
            }
    }
    printf("Step %d:",step);
     for(i=1;i<=n;i++){
        printf("%d ",ar[i]);
    }
        swap(ar[start],ar[min_pos]);

    }

    return 0;
}
