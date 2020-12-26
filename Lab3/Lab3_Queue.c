#include<stdio.h>
#include<stdlib.h>
#define Que_Size 3
int item,front=0,rear=-1,q[10];
void insertrear()
{
    if(rear==Que_Size-1)
    {
        printf("Queue Overflow\n");
        return;
    }
    rear+=1;
    q[rear]=item;
}
int deletefront()
{
    if(front>rear)
    {
        front=0;
        rear=-1;
        return -1;
    }
    return q[front++];
}
void display()
{
    int i;
    if(front>rear)
    {
        printf("Queue is Empty\n");
        return;
    }
    printf("contents of queue\n");
    for(i=front;i<=rear;i++)
    {
        printf("%d\n",q[i]);
    }
}
void main()
{
    int choice;
    for(;;)
    {
        printf("\n 1:Insertion\n 2:Deletion\n 3:Display\n 4:Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : printf("Enter item to be inserted\n");
                     scanf("%d",&item);
                     insertrear();
                     break;
            case 2 :item=deletefront();
                    if(item==-1)
                    {
                        printf("Queue is empty\n");
                    }
                    else
                    {
                        printf("Item deleted=%d\n",item);
                    }
                    break;
            case 3 : display();
                     break;
            default : exit(0);
        }
    }
}
