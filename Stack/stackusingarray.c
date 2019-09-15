
#include <stdio.h>
#include <stdlib.h>
int top=-1;
int stack[20];
void push(int x)
{
    stack[++top]=x;
}
void pop()
{
    top--;
}
void disp()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
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
            case 1:if(top==19)
                   {
                       printf("\nStack Overflow \n");
                       break;
                   }
                   printf("Enter data to push : ");
                   scanf("%d",&x);
                   push(x);
                   break;
            case 2:if(top==-1)
                   {
                       printf("\nStack underflow\n");
                       break;
                   }
                   pop();
                   break;
            case 3:disp();
                   break;
            default:printf("Enter valid choice \n");
        }
        printf("\nDo u want to continue (1/0)  : ");
        scanf("%d",&ch);
    }while(ch==1);
}

