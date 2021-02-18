#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;


void insert(node *list,int data)
{
    while(list->next!=NULL)
    {
        list=list->next;
    }
    list->next = (node*) malloc(sizeof(node));
    list->next->data = data;
    list->next->next =NULL;
    printf("%d is inserted\n",data);
}


void display(node *list)
{
    while(list->next != NULL)
    {
        printf("%d\n",list->next->data);
        list = list->next;
    }
}



void search(node *list,int data)
{
    int count=0;
    while (list->next!=NULL)
    {
        if (list->next->data == data)
        {
            count++;
        }
        list = list->next;
    }
    printf("Total %d results found\n",count);
}



void deleteNode(node *list, int data)
{
    while (list->next != NULL)
    {
        if(list->next->data == data)
        {
           list->next = list->next->next;
           printf("%d is deleted\n",data);
           free(list->data);
            return 0;
        }
        list = list->next;
    }
}




void main()
{
    node *list;
    list = (node*) malloc (sizeof(node));
    list ->next =NULL;

    insert(list,7);
    insert(list,3);
    insert(list,2);
    insert(list,3);
    insert(list,1);

    display (list);

    search(list,3);
    deleteNode(list,1);
    display(list);
}
