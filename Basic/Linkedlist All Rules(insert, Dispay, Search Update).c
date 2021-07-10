#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
typedef struct Node node;
/////////////////////////////////////////
void insertFirst(node*list,int data)
{
    node*temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=list ->next;
    list ->next=temp;
}
/////////////////////////////////////////////
void insertMid(int valu,node*list,int pos)
{
    node*temp=(node*)malloc(sizeof(node));
    temp->data = valu;
    while(list!=NULL)
    {
        if (list->data == pos)
        {
            temp->next = list->next;
            list ->next = temp;
            printf("%d is inserted after %d: ",valu, pos);
            return;
        }
        list=list->next;
    }
    printf("%d not found \n",pos);
}
//////////////////////////////////////////////////////////////

void insertLast(node*list,int data)
{
    node*temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next= NULL;
    while (list->next!=NULL)
    {
        list =list->next;
    }
    list ->next=temp;
}
//////////////////////////////////////////////////////////////

void display(node*list)
{
    while(list!=NULL)
    {
        printf("%d  ",list ->data);
        list = list->next;
    }
    printf("\n");
}
//////////////////////////////////////////////////////////
void delete(node*list , int data)
{
    node*temp=(node*)malloc(sizeof(node));
    while (list->data!= data)
    {
        list =list->next;
    }
    temp= list-> next;
    list ->next= temp -> next;
    free(temp);
    printf("%d is deleted\n", data);
}
////////////////////////////////////////////////
int search(node*list, int data)
{
    int cn=0;
    while (list!=NULL)
    {
        if (list->data==data){
            cn++;}
            list=list->next;
    }
    printf("%d is %d times\n",data,cn);
    return 0;
}
/////////////////////////////////////////

 void update(node*list,int x,int y)
 {
     while (list!=0)
     {
         if (list->data==x)
         {
             list->data=y;
             return;
         }
         list =list->next;
     }
 }
void main()
 {
     node*head=(node*)malloc(sizeof(node));
     head->next=NULL;
     insertLast(head,8);
     insertLast(head,5);
     insertLast(head,2);
     insertLast(head,1);
     insertLast(head,9);
     display(head->next);

     insertFirst(head,55);
      display(head->next);
        insertMid(10,head->next,8);
         display(head->next);
          insertLast(head,7);
           display(head->next);
            delete(head,5);
             display(head->next);
              search(head,7);
               display(head->next);
 }


