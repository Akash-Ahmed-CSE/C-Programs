#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void at_begin(int value)
{
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}

void at_end(int value)
{
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->next = NULL;

    if(head ==  NULL)
    {
        head = temp;
    }
    else
    {
        p = head;

        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}

void at_any_position(int position, int value)
{
    struct node *temp, *p;
    int i;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->next = NULL;

    p = head;

    for(i=1; i<=position-2; i++)
    {
        p = p->next;
    }
    temp->next = p->next;
    p->next = temp;
}

void delete(int position)
{
    struct node *temp, *p, *q;
    int i;

    if(position == 1)
    {
        temp = head;
        head = temp->next;
        temp->next = NULL;
        free(temp);
    }
    else
    {
        p = head;

        for(i=1; i<=position-2; i++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        q->next = NULL;
        free(q);
    }
}

void search(int value)
{
    struct node *temp;
    int flag = 0;

    temp = head;

    while(temp != NULL)
    {
        if(temp->data == value)
        {
            flag = 1;
        }
        temp = temp->next;
    }

    if(flag == 1)
    {
        printf("Found\n");
    }
    else
    {
        printf("Oopps!!! Not found\n");
    }
}

void update(int position, int value)
{
    struct node *temp;
    int i;

    temp = head;

    for(i=1; i<=position-1; i++)
    {
        temp = temp->next;
    }
    temp->data = value;
}


void display()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = head;

        while(temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    /*while(1)
    {
        printf("***Single linked list operation***\n\n");
        printf("1.Insert at begin\n");
        printf("2.Insert at end\n");
        printf("3.Insert at any position except begin and end\n");
        printf("4.Delete at any position\n");
        printf("5.Search a value\n");
        printf("6.Update a value\n");
        printf("7.Display\n");
        printf("8.Exit\n");

        printf("\nEnter your choice : ");
        int ch, position, value;
        scanf("%d", &ch);

        switch(ch)
        {
            case 1 : printf("\nEnter a value : ");
                     scanf("%d", &value);
                     at_begin(value);
                     break;
            case 2 : printf("\nEnter a value : ");
                     scanf("%d", &value);
                     at_end(value);
                     break;
            case 3 : printf("\nEnter a position : ");
                     scanf("%d", &position);
                     printf("\nEnter a value : ");
                     scanf("%d", &value);
                     at_any_position(position, value);
                     break;
            case 4 : printf("\nEnter a position : ");
                     scanf("%d", &position);
                     delete(position);
                     break;
            case 5 : printf("\nEnter a value : ");
                     scanf("%d", &value);
                     search(value);
                     break;
            case 6 : printf("\nEnter a position : ");
                     scanf("%d", &position);
                     printf("\nEnter a value : ");
                     scanf("%d", &value);
                     update(position, value);
                     break;
            case 7 : display();
                     break;
            case 8 : exit(1);
                     break;
            default : printf("\nInvalid choich\n");
        }
        printf("\n\n");
    }*/
    printf("Inserted at end : ");
    at_end(300);
    display();
    printf("Inserted at end : ");
    at_end(400);
    display();
    printf("Inserted at begin : ");
    at_begin(100);
    display();
    printf("Inserted at any position : ");
    at_any_position(2, 700);
    display();
    printf("Search result : ");
    search(700);
    printf("Search result : ");
    search(600);
    printf("After update : ");
    update(2, 200);
    display(); printf("After delete : ");
    delete(4);
    display();

    return 0;
}
