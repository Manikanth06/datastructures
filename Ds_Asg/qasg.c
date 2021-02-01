#include<stdio.h>
#include<stdlib.h>
#define Que_Size 4
int item,front=0,rear=3,q[Que_Size]={0,0,70,80};
void insertrear()
{
    if(rear==3){
        rear=0;
    }
    if(q[rear]!=0){
        printf("Insertion not possible , Overflow occured\n");
        return;
    }
    q[rear]=item;
    rear+=1;
}
int deletefront()
{
    if(front>rear-1)
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
    for(i=front;i<=rear+1
    ;i++)
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
                        printf("Item cannot be deleted\n");
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

