// C program to implement File operation

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int val;
    FILE *fptr;
    fptr = fopen("currentprogram.txt","w");
    if (fptr == NULL)
    {
        printf("File is invalid!\n");
        exit(1);
    }
    printf("PLease enter a val: ");
    scanf("%d",&val);
    fprintf(fptr,"%d",val);
    
}