#include<stdio.h>
void main()
{
    int a[100],n,i,item,first,last,middle;
    printf("Enter the Number of elements\n");
    scanf("%d",&n);
    printf("Enter the data\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search\n");
    scanf("%d",&item);
    first=n-1;
    last=n-1;
    middle=(first+last)/2;
    while (first<=last)
    {
        if(a[middle]<item)
        first=middle+1;
        else if (a[middle]==item)
        {
           printf("Item found at location %d",middle+1);
           break; 
        }
        else
        {
            last=middle-1;
        }
        middle = (first+last)/2;
    }
    if(first>last)
    {
        printf("Item not found");
    }
    }