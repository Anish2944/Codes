// C program to sort an elements using Bubble sort technique

#include<stdio.h>
void main()
{
    int n;
    int i,j,temp;
    printf("Enter a size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all array elements to sort:\n");
    for ( i = 0; i < n; i++)
    {
    scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
            }
            
        }
        
    }
    printf("Sorted array:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}