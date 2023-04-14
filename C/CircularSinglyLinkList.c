#include <stdio.h>
#include <malloc.h>
void display();
void InsertAtFirst();
void InsertAtLast();
void InsertAtIndex();
void DeleteAtFirst();
void DeleteAtLast();
void DeleteAtIndex();
typedef struct Node
{
    int data;
    struct Node *next;
} NODE;
NODE *FIRST = NULL;
NODE *LAST = NULL;
void main()
{
    printf("1. Insert the element at FIRST.\n");
    printf("2. Insert the element at LAST.\n");
    printf("3. Insert the element at SPECIFIC LOCATION.\n");
    printf("4. Delete FIRST ELEMENT.\n");
    printf("5. Delete LAST ELEMENT.\n");
    printf("6. Delete the element at SPECIFIC LOCATION.\n");
    printf("7. TRAVERSE the LIST.\n");
    int choice, item;
    char ch;
    do
    {
        printf("Enter the CHOICE:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            InsertAtFirst();
            break;
        case 2:
            InsertAtLast();
            break;
        case 3:
            InsertAtIndex();
            break;
        case 4:
            DeleteAtFirst();
            break;
        case 5:
            DeleteAtLast();
            break;
        case 6:
            DeleteAtIndex();
            break;
        case 7:
            display();
            break;
        default:
            printf("Enter the CORRECT CHOICE.\n");
        }
        fflush(stdin);
        printf("\nDo you wish to continue(Y/N)?\n");
        scanf("%c", &ch);
    } while (ch == 'Y' || ch == 'y');
    
    // NODE *second;
    // NODE *third;
    // FIRST = (NODE *)malloc(sizeof(NODE));
    // second = (NODE *)malloc(sizeof(NODE));
    // third = (NODE *)malloc(sizeof(NODE));
    // LAST = (NODE *)malloc(sizeof(NODE));

    // FIRST->data = 66;
    // FIRST->next = second;
    // second->data = 75;
    // second->next = third;
    // third->data = 98;
    // third->next = LAST;
    // LAST->data = 29;
    // LAST->next = FIRST;
    // display();
}
void display()
{
    NODE *ptr;
    ptr = (NODE *)malloc(sizeof(NODE));
    ptr = FIRST;
    do
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    } while (ptr != FIRST);
}
void InsertAtFirst()
{
    NODE *P, *Temp;
    P = (NODE *)malloc(sizeof(NODE));
    int item;
    printf("Enter the data to be inserted at FIRST:\n");
    scanf("%d", &item);
    P->data = item;
    // if (FIRST == NULL)
    // {
    //     FIRST = LAST = P;
    //     P->next = FIRST;
    // }
    
    Temp = FIRST->next;
    while (Temp->next != FIRST)
    {
        Temp = Temp->next;
    }
    Temp->next = P;
    P->next = FIRST;
    FIRST = P;
}
void InsertAtLast()
{
    NODE *P, *Temp;
    P = (NODE *)malloc(sizeof(NODE));
    int item;
    printf("Enter the data to be inserted at LAST:\n");
    scanf("%d", &item);
    P->data = item;
    Temp = FIRST;
    while (Temp->next != FIRST)
    {
        Temp = Temp->next;
    }
    Temp->next = P;
    P->next = FIRST;
}
void InsertAtIndex()
{
    NODE *P, *Temp;
    P = (NODE *)malloc(sizeof(NODE));
    int item,index;
    printf("Enter the data to be insert at Specific position:\n");
    scanf("%d", &item);
    printf("Enter the Position\n");
    scanf("%d", &index);
    P->data = item;
    Temp = FIRST;
    for (int i = 1; i < index-1; i++)
    {
        Temp = Temp->next;
    }
    P->next = Temp->next;
    Temp->next = P;
}
void DeleteAtFirst()
{
    NODE *P;
    if (FIRST == NULL)
    {
        printf("List is Empty\n");
    }
    else
    {
    P = FIRST;
    FIRST = FIRST->next;
    LAST->next = FIRST;
    printf("Deleted Data: %d\n",P->data);
    free(P);
    }
}
void DeleteAtLast()
{
    NODE *P, *Temp;
    P = FIRST;
    while (P->next != FIRST)
    {
        Temp = P;
        P = P->next;
    }
    Temp->next = P->next;
    LAST = Temp;
    printf("Deleted Data: %d\n",P->data);
    free(P);
}
void DeleteAtIndex()
{
    NODE *P, *Temp;
    int index;
    printf("Enter a Index\n");
    scanf("%d",&index);
    P = FIRST;
    for (int i = 0; i < index-1; i++)
    {
        Temp = P;
        P = P->next;
    }
    Temp->next = P->next;
    printf("Deleted Data: %d\n",P->data);
    free(P);
}

