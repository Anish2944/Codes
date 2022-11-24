#include<stdio.h>
int sumdiv(int n);
void main()
{
int n1,n2,div,i;
printf("Enter the range to print all Perfect numbers\n");
scanf("%d%d",&n1,&n2);
if (n1>n2)
{
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
}
for ( i = n1; i <= n2; i++)
{
    if (i==sumdiv(i))
    {
        printf("%d\n",i);
    }
    
}
}
int sumdiv(int n)
{
    int sum=0,i;
    for (i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum = sum + i;
        }
    }
        return sum;
}


