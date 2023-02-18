#include <stdio.h>
void insertion(int n, int a[n]);
void deletion(int n, int a[n]);
void search(int n, int a[n]);
void update(int n, int a[n]);
void main()
{
    int ch, i, n;
    char d;
    printf("Enter the array size\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter all elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("1-Insertion\n2-Deletion\n3-searching\n4-update\n");
    do
    {
        printf("Enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            insertion(n, a);
            break;
        }
        case 2:
        {
            deletion(n, a);
            break;
        }
        case 3:
        {
            search(n, a);
            break;
        }
        case 4:
        {
            update(n, a);
            break;
        }
        default:
        {
            printf("Enter a right choice");
        }
        }
        fflush(stdin);
        printf("\nDo you wish to continue(Y/N)?\n");
        scanf("%c", &d);
    } while (d == 'Y' || d == 'y');
}
void insertion(int n, int a[n])
{
    int p, item, i, j = n;
    printf("Enter item to insert\n");
    scanf("%d", &item);
    printf("Enter a position to insert\n");
    scanf("%d", &p);
    n = n + 1;
    while (j >= p)
    {
        a[j] = a[j - 1];
        j = j - 1;
    }
    a[j] = item;
    for (i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
}
void deletion(int n, int a[n])
{
    int i, pos;
    printf("Enter a position to remove an element\n");
    scanf("%d", &pos);
    if (pos >= n + 1)
    {
        printf("cannot be delete\n");
    }
    else
    {
        for (i = pos - 1; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        for (i = 0; i < n - 1; i++)
        {
            printf("%d ",a[i]);
        }
    }
}
void search(int n, int a[n])
{
    int item, i;
    printf("Enter an item to find\n");
    scanf("%d", &item);
    for (i = 0; i < n; i++)
    {
        if (a[i] == item)
        {
            printf("Element found at loaction %d", i + 1);
            break;
        }
    }
    if (i == n)
    {
        printf("%d element not found", item);
    }
}
void update(int n, int a[n])
{
    int i, item, p;
    printf("Enter your positon to update an item\n");
    scanf("%d", &p);
    printf("Enter your new item to update\n");
    scanf("%d", &item);
    a[p - 1] = item;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}