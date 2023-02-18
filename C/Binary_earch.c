//C program for searching elements using Binary search technique

#include<stdio.h>
void main()
{ 
    int n,i,last,mid,first,item;
    printf("Enter a size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all array elements in sorted:\n");
    for ( i = 0; i < n; i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Enter a item to search: ");
    scanf("%d",&item);
    first = 0;
    last = n - 1;
    while(first<=last && item!=arr[mid])
    {
        mid = (first+last)/2;
        if (item>arr[mid])
        {
            first = mid + 1;
        }
        if (item<arr[mid])
        {
            last = mid - 1;
        }
        if (item == arr[mid])
        {
            printf("search is successfull\nFound at location %d",mid+1);
        }
        if (first>last)
        {
            printf("Item not found");
        }        
    }
  
}