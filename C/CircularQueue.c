#include <stdio.h>

#define SIZE 5
int REAR = 0;
int FRONT = -1;
int CQ[SIZE];
///////////////
void cq_insert();
void cq_delete();
void cq_display();
///////////////
void main()
{

    int ch;
    char c;
    printf("1.Insert\n2.Delete\n3.Display\n");
    do
    {
        printf("Enter the CHOICE:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            cq_insert();
            break;
        case 2:
            cq_delete();
            break;
        case 3:
            cq_display();
            break;
        default:
            printf("Enter the CORRECT Choice\n");
        }
        fflush(stdin);
        printf("\nDo you wish to continue(y/n)?");
        scanf("%c", &c);
    } while (c == 'y' || c == 'Y');
}
///////////////////////////
void cq_insert()
{
    int item;
    if ((REAR + 1) % SIZE == FRONT)
    {
        printf("QUEUE is full.\n");
    }
    else if (FRONT == -1)
    {
        printf("Enter the Item:\n");
        scanf("%d", &item);
        FRONT = REAR = 0;
        CQ[REAR] = item;
    }
    else
    {
        printf("Enter the Item:\n");
        scanf("%d", &item);
        REAR = (REAR + 1) % SIZE;
        CQ[REAR] = item;
    }
}
////////////////////////////////////
void cq_delete()
{
    int item;
    if (FRONT == -1)
    {
        printf("The Queue is EMPTY\n");
    }
    else
    {
        item = CQ[FRONT];
        printf("Deleted ITEM:%d", item);
        if (FRONT == REAR)
        {
            FRONT = REAR = -1;
        }
        else
        {
            FRONT = (FRONT + 1) % SIZE;
        }
    }
}
//////////////////////////////////
void cq_display()
{
    if (FRONT == -1)
    {
        printf("Queue is EMPTY\n");
    }
    else
    {
        for (int i = FRONT; i <= REAR; i++)
        {
            printf("%d\t", CQ[i]);
        }
    }
    if (FRONT > REAR)
    {
        for (int i = FRONT; i < SIZE; i++)
        {
            printf("%d\t", CQ[i]);
        }
        for (int i = 0; i <= REAR; i++)
        {
            printf("%d\t", CQ[i]);
        }
    }
}