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
        for ( j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
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