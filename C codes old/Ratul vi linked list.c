#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node *next;
};
typedef struct Node node;


void display(node *current) {
	printf("The List= ");
	while (current != '\0') {
		printf("%d ", current->data);
		current = current->next;
	}
	printf("\n");
}


void insertMid(int value, node *current, int pos) {
	node *temp = (node *)malloc(sizeof(node));
	temp->data = value;
	while (current != '\0') {
		if (current->data == pos) {
			temp->next = current->next;
			current->next = temp;
			printf("%d Inserted successfully after %d!\n",value,pos);
			return;
		}
		current = current->next;
	}
	printf("%d not found!\n", pos);
}


void insertLast(node *current, int data) {
	node *temp = (node *)malloc(sizeof(node));
	temp->data = data;
	temp->next = '\0';
	while (current->next != '\0')
		current = current->next;
	current->next = temp;
}


void delete(node *current) {
	node *temp = (node *)malloc(sizeof(node));
	if (current->next == '\0') {
		printf("list is empty!\n");
		return;
	}
	while (current->next->next != '\0')
		current = current->next;
	temp = current->next;
	current->next = '\0';
	free(temp);
}


void insertFirst(node *current, int data) {
	node *temp = (node *)malloc(sizeof(node));
	temp->data = data;
	temp->next = current->next;
	current->next = temp;
}


void main() {
	node *head = (node *)malloc(sizeof(node));
	node *head1 = (node *) malloc(sizeof(node));
	head->next = '\0';
	head1->next = '\0';
	int i;
	for (i = 0; i <= 4; i++) {
		insertLast(head, i + 5);
	}
	display(head->next);
	insertMid(10, head->next, 8);
	display(head->next);
	insertMid(10, head->next, 9);
	display(head->next);
	insertMid(10, head->next, 19);
	display(head->next);
	insertFirst(head , 4);
	display(head->next);
	delete(head);
	display(head->next);
	delete(head1);

}
