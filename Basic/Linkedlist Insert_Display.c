#include<stdio.h>
#include<stdlib.h>
struct Shop
{
    int prise;
    int ID;
    int quantity;
    int total;
    struct Shop *next;
};
typedef struct Shop shop;
void insert(shop*list,int prise,int ID)
{

    printf("Enter the name, prise and ID of the product:");
    scanf("%d %d",&prise,&ID);
    shop*temp;
    temp =(shop*)malloc(sizeof(shop));
    temp->prise=prise;
    temp->ID=ID;
    temp->total=temp->prise*temp->quantity;
    temp->next=NULL;
    while (list!=NULL)
    {
        list =list->next;
    }
    list->next=temp;
}
void display(shop*list)
{
    while (list!=NULL)
        printf("%d %d",list->prise,list->ID);
    list=list->next;
}
int main()
{
  shop*list=(shop*)malloc(sizeof(shop));
  int a;
  int prise;
   int ID;
  scanf("%d",&a);
  if (a==1){
    scanf("%d %d",&insert(list ->prise,list->ID));
  }
    else
  display(prise,ID);
  return 0;
}
