#include<stdio.h>
#include<malloc.h>
void displayFromHead();
void displayFromTail();
void InsertAtFirst();
void InsertAtIndex();
void InsertAtLast();
void DeleteAtFirst();
void DeleteAtLast();
void DeleteAtIndex();
typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
}NODE;
NODE *FIRST = NULL;
NODE *LAST = NULL;
void main()
{
    NODE *second;
    NODE *third;
    FIRST = (NODE *)malloc(sizeof(NODE));
    second = (NODE *)malloc(sizeof(NODE));
    third = (NODE *)malloc(sizeof(NODE));
    LAST = (NODE *)malloc(sizeof(NODE));

    FIRST->data = 66;
    FIRST->prev = NULL;
    FIRST->next = second;

    second->data = 75;
    second->prev = FIRST;
    second->next = third;

    third->data = 98;
    third->next = LAST;
    third->prev = second;

    LAST->data = 29;
    LAST->prev = third;
    LAST->next = NULL;
    displayFromHead();
    printf("\n");
    displayFromTail();
    printf("\n");
    DeleteAtIndex();
    displayFromHead();
    printf("\n");
    displayFromTail();

}
void displayFromHead()
{
    NODE *ptr;
    ptr = (NODE *)malloc(sizeof(NODE));
    ptr = FIRST;
    do{
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    } while (ptr != NULL);
}
void displayFromTail()
{ 
    NODE *ptr;
    ptr = (NODE *)malloc(sizeof(NODE));
    ptr = LAST;
    do{
        printf("%d\t",ptr->data);
        ptr = ptr->prev;
    } while (ptr != NULL);
}
void InsertAtFirst()
{
    NODE *ptr;
    ptr = (NODE*)malloc(sizeof(NODE));
    int item;
    printf("Enter a data\n");
    scanf("%d",&item);
    ptr->data = item;
    if (FIRST == NULL)
    {
        ptr->next = NULL;
        ptr->prev = NULL;
        FIRST = LAST = ptr;
    }
    else
    {
        ptr->prev = NULL;
        ptr->next = FIRST;
        FIRST->prev = ptr;
        FIRST = ptr;
    }
}
void InsertAtLast()
{
    NODE *ptr, *Temp;
    ptr = (NODE*)malloc(sizeof(NODE));
    int item;
    printf("Enter a data\n");
    scanf("%d",&item);
    ptr->data = item;
    if (FIRST == NULL)
    {
        ptr->next = NULL;
        ptr->prev = NULL;
        FIRST = LAST = ptr;
    }
    else
    {
       ptr->next = NULL;
       ptr->prev = LAST;
       LAST->next = ptr;
       LAST = ptr; 
    }
}
void InsertAtIndex()
{
    NODE *ptr, *Temp;
    ptr = (NODE*)malloc(sizeof(NODE));
    int item, index;
    printf("Enter a data\n");
    scanf("%d",&item);
    printf("Enter a Position\n");
    scanf("%d",&index);
    ptr->data = item;
    Temp = FIRST;
    for (int i = 1; i < index-1; i++)
    {
        Temp = Temp->next;
    }
    ptr->next = Temp->next;
    ptr->prev = Temp;
    Temp->next = ptr;
    Temp->next->prev = ptr;
}
void DeleteAtFirst()
{
    NODE *ptr;
    ptr = FIRST;
    FIRST = FIRST->next;
    FIRST->next->prev = NULL;
    printf("Deleted item: %d\n",ptr->data);
    free(ptr);   
}
void DeleteAtLast()
{
    NODE *ptr, *Temp;
    ptr = LAST;
    LAST = LAST->prev; 
    LAST->next = NULL;
    printf("Deleted item: %d\n",ptr->data);
    free(ptr);   
}
void DeleteAtIndex()
{
    NODE *ptr, *Temp;
    int index;
    printf("Enter a position\n");
    scanf("%d",&index);
    ptr = FIRST;
    for (int i = 0; i < index-1; i++)
    {
        Temp = ptr;
        ptr = ptr->next;
    }
    Temp->next = ptr->next;
    ptr->next->prev = Temp;
    printf("Deleted item: %d\n",ptr->data);
    free(ptr);    
}