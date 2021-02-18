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

    printf("----------------------------------------------\n");
    printf("----------------------------------------------\n");
    printf("-                                            -\n");
    printf("-                                            -\n");
    printf("-       welcome to our super shop            -\n");
    printf("-                                            -\n");
    printf("-                                            -\n");
    printf("----------------------------------------------\n");
    printf("----------------------------------------------\n");
    printf("press 1 to display all products or press 2 to calculate\n");
     while (1){int a;
     scanf("%d",&a);
     if (a==1){
        printf("  Name -------------price \n");
        printf("(1):kitkat      =   10 taka\n");
        printf("(2):Rice        =   35 taka\n");
        printf("(3):sugar       =   60 taka\n");
        printf("(4):football    =   800 taka\n");
        printf("(5):cricket bat =   1200 taka\n");
     }

        else if (a==2){
                  node *head;
    head=(node*)malloc(sizeof(node));
    head->x=10;
    head->next=(node*)malloc(sizeof(node));
    head->next->x=35;
    head->next->next=(node*)malloc(sizeof(node));
    head->next->next->x=60;
    head->next->next->next=(node*)malloc(sizeof(node));
    head->next->next->next->x=800;
    head->next->next->next->next=(node*)malloc(sizeof(node));
    head->next->next->next->next->x=900;


        printf("amount of kitka:");
        scanf("%d",&head->y);
        int kitkat=head->x*head->y;
        printf("the total prise of kitkat is %d\n",kitkat);
        printf("amount of rice:");
        scanf("%d",&head->next->y);
        int rice=head->next->x*head->next->y;
        printf("the total prise of rice is %d\n",rice);
        printf("amount of sugar:");
        scanf("%d",&head->next->next->y);
        int sugar=head->next->next->x*head->next->next->y;
        printf("the total prise of sugar is %d\n",sugar);
        printf("amount of football:");
        scanf("%d",&head->next->next->next->y);
        int football=head->next->next->next->x*head->next->next->next->y;
         printf("the total prise of football is %d\n",football);
         printf("amount of cricket bat:");
        scanf("%d",&head->next->next->next->next->y);
        int cricketBat=head->next->next->next->next->x*head->next->next->next->next->y;
        printf("the total prise of cricket bat is %d\n",cricketBat);
        printf("Total price: %d\n",kitkat+rice+sugar+football+cricketBat);
        }
    }
    return 0;

}
