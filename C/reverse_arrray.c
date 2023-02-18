#include<stdio.h>
void reverse(int *a , int n);
void main()
{
    int num,i,arr[100];
    printf("Enter a total number of array:\n");
    scanf("%d",&num);
    printf("Enter all array:\n");
    for (i = 0; i < num; i++)
    {
    scanf("%d",&arr[i]);
    }
    reverse(arr,num);
    printf("After Reversing all elements\n");
    for (i = 0; i < num; i++)
    {
       printf("%d ",arr[i]);
    }
}    
    void  reverse(int *a, int n)
{
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}

