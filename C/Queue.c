#include <stdio.h>
#define SIZE 10
void Q_Insert();
void Q_Delete();
void Q_Display();
int Queue[SIZE];
int FRONT = -1;
int REAR = -1;
void main()
{
    int choice;
    char ch;
    printf("1.Insert\n2.Delete\n3.Display\n");
    do
    {
        printf("Enter choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Q_Insert();
            break;
        case 2:
            Q_Delete();
            break;
        case 3:
            Q_Display();
            break;
        default:
            printf("Enter a correct choice\n");
        }
        printf("Do you wish to continue\n");
        fflush(stdin);
        scanf("%c", &ch);
    } while (ch == 'y' || ch == 'Y');
}
void Q_Insert()
{
    int item;
    if (REAR == SIZE - 1)
    {
        printf("Queue is Full\n");
    }
    else if (FRONT == -1)
    {
        printf("Enter a Number\n");
        scanf("%d", &item);
        FRONT = REAR = 0;
        Queue[REAR] = item;
    }
    else
    {
        printf("Enter a Number\n");
        scanf("%d", &item);
        REAR += 1;
        Queue[REAR] = item;
    }
}
void Q_Delete()
{
    int item;
    if (FRONT == -1 || FRONT > REAR)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        item = Queue[FRONT];
        FRONT += 1;
        printf("Deleted item: %d\n", item);
    }
}
void Q_Display()
{
    if (FRONT == REAR)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        for (int i = FRONT; i <= REAR; i++)
        {
            printf("%d\t", Queue[i]);
        }
        printf("\n");
    }
}