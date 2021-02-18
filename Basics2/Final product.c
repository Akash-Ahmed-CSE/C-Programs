#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Shop {
	int data;//////prise////////
	int quantity;///////// quantity////
	float t;//////total////////
	struct Shop *next;///pointer///
};
typedef struct Shop shop;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void insertLast(shop *current) {
    int data;
    int quantity;
    float t;
	shop *temp = (shop *)malloc(sizeof(shop));
	printf("Enter the prise:");
	scanf("%d",&temp->data);
	printf("Enter the quantity:");
	scanf("%d",&temp->quantity);
	temp->t=temp->data*temp->quantity;////////////////multiplying (prise and quantity)////////////////////////////////////////////////////////////////////////
	temp->next = '\0';
	while (current->next != '\0')
		current = current->next;
	current->next = temp;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void display(shop *current) {
	while (current != '\0') {
		printf("prise=%d \tquantity=%d \ttotal=%.2f\n", current->data,current->quantity,current->t);
		current = current->next;
	}
	printf("\n");
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void totalsum (shop*current)
{
    float s=0;
    while (current!='\0')
    {
        s=s+current->t;///////////// NOT working /\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\/
        current=current->next;
    }
    printf("\ntotal price is %.2f",s);

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void main() {
	shop *head = (shop *)malloc(sizeof(shop));
	head->next = '\0';
    printf("**********************************************\n");
    printf("**********************************************\n");
    printf("**     ! OOOOOOOOOOOOOOOOOOOOOOOOO !        **\n");
    printf("**^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^**\n");
    printf("**     ! WELCOME TO OUR SUPER SHOP !        **\n");
    printf("**     !                           !        **\n");
    printf("**^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^**\n");
    printf("**     ! OOOOOOOOOOOOOOOOOOOOOOOOO !        **\n");
    printf("**********************************************\n");
    printf("Press any key to continue:");
    getch();
    system("cls");
    printf("press 1 to go to display \nand\npress 2 to insert\n");
    while (1){
    int a;
     scanf("%d",&a);
     if (a==1){
        printf("Name -------price ------- code number\n");
        printf("kitkat      = 10 taka    =101\n");
        printf("Rice        = 70 taka    =102\n");
        printf("sugar       = 60 taka    =103\n");
        printf("football    = 800 taka   =104\n");
        printf("cricket bat = 1200 taka  =105\n");
     }
else if (a==2){
	int i,m;
	printf("Enter how many products:");
	scanf("%d",&m);
	for(i=0;i<m;i++){
            insertLast(head);
	}
	display(head->next);
	totalsum(head);
	return;
	}
}
}
