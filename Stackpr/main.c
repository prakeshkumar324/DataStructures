#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
int top=-1;
void push(int x)
{
    struct node *nen=(struct node*)malloc(sizeof(struct node));
    nen->data=x;
    nen->next=head;
    head=nen;
}
void pop()
{
    if(head==NULL){
        printf("Stack underflow");
        return;
    }
    struct node *temp;
    temp=head;
    head=temp->next;
    free(temp);
}
void disp()
{
    if(head==NULL){
        printf("Stack is empty\n");
        return;
    }
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int ch,x;
    do
    {
        printf("Enter choice : \n1.Push\t2.Pop\t3.Display  :  ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter data to push : ");
                   scanf("%d",&x);
                   push(x);
                   break;
            case 2:pop();
                   break;
            case 3:disp();
                   break;
            default:printf("Enter valid choice \n");
        }
        printf("\nDo u want to continue (1/0)  : ");
        scanf("%d",&ch);
    }while(ch==1);
}


