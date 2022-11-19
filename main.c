#include <stdio.h>
#define MAX 50
int queue_array[MAX];
int rear = -1;
int front = -1;

display()
{
    int i;
    if(front== -1)
        printf("queue is empty \n");
        else
        {
            printf("queue is: \n");
        for(i=front;i<=rear;i++)
        printf("%d",queue_array[i]);
    printf("\n");
        }

}//end of display

insert()
{
    int add_item;
    if(rear==MAX-1)
        printf("queue is overflow \n");
    else
    {
        if(front== -1)
            front=0;
        printf("insert the element in queue:");
        scanf("%d",&add_item);
        rear=rear+1;
        queue_array[rear]=-add_item;
    }
}//end of insert

delete()
{
    if(front==-1|| front>rear)
    {
        printf("queue underflow \n");
        return;
    }
    else
    {
        printf("deleted element is : %d \n",queue_array[front]);
        front=front+1;
    }
}//end of delete

main()
{
    int choice;
    while(1)
    {
        printf("1.insert \n");
        printf("2.delete \n");
        printf("3.display \n");
        printf("4.exit \n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            case 4:exit(1);
            default: printf("invalid choice \n");
        }
    }
}
