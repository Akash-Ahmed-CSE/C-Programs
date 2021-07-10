#include<stdio.h>
#include<stdlib.h>
struct Shop
{
    int prise;
    int quantity;
    int total;
    struct shop *next;
};
typedef struct Shop shop;
void insert(shop*list,int prise)
{
    shop*temp=(shop*)malloc(sizeof(shop));
    temp->prise=prise;
    scanf("%d",&temp->quantity);
    temp->total=list->prise*list->quantity;
    temp->next=NULL;
    while (list->next!=NULL)
    {
        list =list->next;
    }
    list->next=temp->next;
    list->next=temp;
}
void display(shop*list)
{
    while (list!=NULL)
    {
        printf("%d %d %d",list ->prise,list->quantity,list->total);
        list=list->next;
    }
    printf("\n");
}
int sum(shop*list)
{
    int sum=0;
    while (list!=0)
    {
        sum=sum+list->total;
    }
    printf("Total prise is %d",sum);
}
int main()
{
    shop*head=(shop*)malloc(sizeof(shop));
    head->next=NULL;

    insert(head,10);
    display(head);

}
