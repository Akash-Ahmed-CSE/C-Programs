#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;//////prise////////
	int a;///////// quantity////
	float t;//////total////////
	struct Node *next;///pointer///
};
typedef struct Node node;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
void insertLast(node *current) {
    int data;
    int a;
    float t;
	node *temp = (node *)malloc(sizeof(node));
	printf("Enter the prise:");
	scanf("%d",&temp->data);
	printf("Enter the quantity:");
	scanf("%d",&temp->a);
	temp->t=temp->data*temp->a;////////////////multiplying (prise and quantity)/////////////
	temp->next = '\0';
	while (current->next != '\0')
		current = current->next;
	current->next = temp;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void display(node *current) {
	while (current != '\0') {
		printf("prise=%d \tquantity=%d \ttotal=%.2f\n", current->data,current->a,current->t);
		current = current->next;
	}
	printf("\n");
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void totalsum (node*current)
{
    float s=0;
    while (current!='\0')
    {
        s=s+current->t;/////////////NOT working /////////////////////
        current=current->next;
    }
    printf("\ntotal prise is %f",s);

}
////////////////////////////////////////////////////////////////////////////////////////////////////////
void main() {
	node *head = (node *)malloc(sizeof(node));
	head->next = '\0';
	int i,n;
	printf("Enter how many products:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
            insertLast(head);

	}
	display(head->next);
	totalsum(head);
}

