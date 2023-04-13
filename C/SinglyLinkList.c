#include <stdio.h>
#include <malloc.h>
void display();
void InsertAtFirst();
void InsertAtIndex();
void InsertATLast();
void DeleteAtFirst();
void DeleteAtLast();
void DeleteAtIndex();
typedef struct node
{
    int data;
    struct node *next;
} NODE;
NODE *First = NULL;
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
            InsertAtIndex();
            break;
        case 3:
            InsertATLast();
            break;
        case 4:
            DeleteAtFirst();
            break;
        case 5:
            DeleteAtIndex();
            break;
        case 6:
            DeleteAtLast();
            break;
        case 7:
            display();
            break;
        default:
            printf("Enter the CORRECT CHOICE.\n");
        }
        fflush(stdin);
        printf("\nDo you wish to continue(1/0)?\n");
        scanf("%c", &ch);
    } while (ch == 'Y' || ch == 'y');
    // NODE *second;
    // NODE *third;
    // NODE *fourth;
    // First = (NODE *)malloc(sizeof(NODE));
    // second = (NODE *)malloc(sizeof(NODE));
    // third = (NODE *)malloc(sizeof(NODE));
    // fourth = (NODE *)malloc(sizeof(NODE));

    // First->data = 66;
    // First->next = second;
    // second->data = 75;
    // second->next = third;
    // third->data = 98;
    // third->next = fourth;
    // fourth->data = 29;
    // fourth->next = NULL;
}
void display()
{
    NODE *ptr;
    ptr = First;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}
void InsertAtFirst()
{
    NODE *ptr;
    ptr = (NODE *)malloc(sizeof(NODE));
    int item;
    printf("\nEnter a data to put at First position\n");
    scanf("%d", &item);
    ptr->data = item;
    if (First == NULL)
    {
        ptr->next = NULL;
        First = ptr;
    }
    else
    {
        ptr->next = First;
        First = ptr;
    }
}
void InsertAtIndex()
{
    NODE *ptr, *IND;
    ptr = (NODE *)malloc(sizeof(NODE));
    int item, index;
    printf("\nEnter a data to insert\n");
    scanf("%d", &item);
    printf("Enter the Position\n");
    scanf("%d", &index);
    IND = First;
    for (int i = 1; i < index - 1; i++)
    {
        IND = IND->next;
    }
    ptr->data = item;
    ptr->next = IND->next;
    IND->next = ptr;
}
void InsertATLast()
{
    NODE *ptr, *TEMP;
    ptr = (NODE *)malloc(sizeof(NODE));
    int item;
    printf("\nEnter a data to put at Last position\n");
    scanf("%d", &item);
    TEMP = First;
    while (TEMP->next != NULL)
    {
        TEMP = TEMP->next;
    }
    TEMP->next = ptr;
    ptr->data = item;
    ptr->next = NULL;
}
void DeleteAtFirst()
{
    NODE *ptr;
    ptr = First;
    First = First->next;
    printf("\nDeleted Data = %d\n", ptr->data);
    free(ptr);
}
void DeleteAtLast()
{
    NODE *ptr, *TEMP;
    TEMP = First;
    ptr = First->next;
    while (ptr->next != NULL)
    {
        TEMP = TEMP->next;
        ptr = ptr->next;
    }
    TEMP->next = NULL;
    printf("\nDeleted Data = %d\n", ptr->data);
    free(ptr);
}
void DeleteAtIndex()
{
    NODE *ptr, *TEMP;
    int index;
    ptr = First;
    printf("\nEnter a position to Remove data\n");
    scanf("%d", &index);
    for (int i = 0; i < index - 1; i++)
    {
        TEMP = ptr;
        ptr = ptr->next;
    }
    TEMP->next = ptr->next;
    printf("\nDeleted Data = %d\n", ptr->data);
    free(ptr);
}
