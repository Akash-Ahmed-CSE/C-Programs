#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Shop {
    int code;
	int price;//////price////////
	float t;//////total////////
	struct Shop *next;///pointer///
};
typedef struct Shop shop;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void insertLast(shop *current) {
    int code;
    int price;
	shop *temp = (shop *)malloc(sizeof(shop));
	printf("Enter the code:");
	scanf("%d",&temp->code);
	printf("Enter the price:");
	scanf("%d",&temp->price);

	temp->next = '\0';
	while (current->next != '\0')
		current = current->next;
	current->next = temp;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void insertUser(shop*current)
{
    int quantity;
    float t;
    int code;
    printf("Enter the code:");
    scanf("%d",&code);
    printf("Enter the quantity");
    scanf("%d",&quantity);
    while (current->next!='\0')
    {
        if (current->code==code)
        {
            current->t=current->price*quantity;
        }
        current=current->next;
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void display(shop *current) {
	while (current != '\0') {
		printf("prise=%d \tquantity=%d\n", current->code,current->price);
		current = current->next;
	}
	printf("\n");
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void displayUser(shop *current) {
	while (current != '\0') {
		printf("code=%d \tprise=%d \ttotal=%.2f\n", current->code,current->price,current->t);
		current = current->next;
	}
	printf("\n");
}
void totalsum (shop*current)
{
    float s=0;
    while (current!='\0')
    {
        s=s+current->t;///////////// NOT working /\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\/
        current=current->next;
    }
    printf("\ntotal price is %.2f\n",s);

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
    printf("press 1 for admin\npress 2 display\npress 3 to user\npress 4 to display price\npress 5 to EXIT\n");

      while(1)
   {
       int password;
       printf("-----------------------\n");
       printf("-----------------------\n");
       printf("--Enter your password--\n");
       printf("-----------------------\n");
       printf("-----------------------\n");
    scanf("%d",&password);
    while (1){
        if (password==123)break;
        else
            printf("Wrong password,try again\n");
            scanf("%d",&password);
    }printf("access granted!\nEnter your option\n");break;

   }
    while (1){
    int a;
     scanf("%d",&a);
     if (a==1){
	int i,m;
	printf("Enter how many products:");
	scanf("%d",&m);
	for(i=0;i<m;i++){
            insertLast(head);
	}
     }
	if (a==2){
	display(head->next);
     }
     if (a==3){printf("Enter how many products:");
     int p,k;
     scanf("%d",&p);
        for (k=0;k<p;k++)
        {insertUser(head);
     }}
	if (a==4){displayUser(head->next);totalsum(head->next);}
	if (a==5) return;
}
}

