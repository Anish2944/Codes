#include<stdio.h>
int main()
{
    int n1,n2,count;
    printf("Enter two numbers to print all prime number between them:\n");
    scanf("%d\t%d",&n1,&n2);
    for (int i = n1; i <= n2; i++)
    {
        count=0;
        for (int j = 2; j <= i; j++)
        {
            if (i%j==0) 
            count++;
        }
            if(count==1)
            printf("%d\t",i);
    }
}
