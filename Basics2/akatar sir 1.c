#include<stdio.h>
int stack[10];
int top=-1;
void push(int data)
{
    if (top>9)
    {
        printf("Stake is full\n");
        return ;
    }
    top++;
    stack[top]=data;
    printf("%d is pushed\n",data);
}
int pop()
{
    if (top<0)
    {
        printf("Stake is empty\n");
        return -1;
    }
    return stack[top--];
}
int main()
{
    push (3);push (5);push (7);
   printf("%d\n",pop());
   printf("%d\n",pop());
   printf("%d\n",pop());
   printf("%d\n",pop());
    return 0;
}















