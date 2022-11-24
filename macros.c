// C program to implement Macros

#include<stdio.h>

#define PI 3.14

int  main()
{
    printf("File Name: %s\n",__FILE__);

    printf("Date: %s\n",__DATE__);

    printf("Time: %s\n",__TIME__);

    printf("Line Number: %d\n",__LINE__);

    printf("Value of Pi = %.2f",PI);

    return 0;

}