#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int x;
    int y;
    struct Node *next;
};
typedef struct Node node;
int main()
{

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
    printf("press 1 to go to display \nand\npress 2 to calculate\n");
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
      printf("Enter code number (press 3 for sum):");
      int b;
      while (1){
      scanf("%d",&b);
           node *head;

    head=(node*)malloc(sizeof(node));
    head->x=10;
    head->next=(node*)malloc(sizeof(node));
    head->next->x=70;
    head->next->next=(node*)malloc(sizeof(node));
    head->next->next->x=60;
    head->next->next->next=(node*)malloc(sizeof(node));
    head->next->next->next->x=800;
    head->next->next->next->next=(node*)malloc(sizeof(node));
    head->next->next->next->next->x=1200;
    if (b==101){
            printf("Enter the amount:");
            scanf("%d",&head->y);
    int kitkat=head->x*head->y;
    printf("the total prise of kitkat is: %d taka\n",kitkat);
    printf("Enter code number (press 3 for sum):");
    }
    else if (b==102)
    {
        printf("Enter the amount:");
        scanf("%d",&head->next->y);
        int rice=head->next->x*head->next->y;
        printf("the total prise of rice is: %d taka\n",rice);
        printf("Enter code number (press 3 for sum):");
    }
    else if (b==103)
    {
        printf("Enter the amount:");
        scanf("%d",&head->next->next->y);
        int sugar=head->next->next->x*head->next->next->y;
        printf("the total prise of sugar is: %d taka\n",sugar);
        printf("Enter code number (press 3 for sum):");
    }
    else if (b==104)
    {
        printf("Enter the amount:");
        scanf("%d",&head->next->next->next->y);
        int football=head->next->next->next->x*head->next->next->next->y;
         printf("the total prise of football is: %d taka\n",football);
         printf("Enter code number (press 3 for sum):");
    }
    else if (b==105)
    {
        printf("Enter the amount:");
        scanf("%d",&head->next->next->next->next->y);
        int cricketBat=head->next->next->next->next->x*head->next->next->next->next->y;
        printf("The total prise of cricket bat is: %d taka\n",cricketBat);
        printf("Enter code number (press 3 for sum):");
               }
               else printf("Wrong input please try again!");

            }
        }
    }
        return 0;
}
