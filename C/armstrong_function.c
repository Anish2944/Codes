#include<stdio.h>
int cube_sum(int a);
void main()
{
    int n1,n2,arm;
    printf("Give a range to print armstrong number \nfrom: ");
    scanf("%d",&n1);
    printf("\nTo: ");
    scanf("%d",&n2);
    if (n1>n2)
    {
        n1 = n1 + n2;
        n2 = n1 - n2;
        n1 = n1 - n2;
    }
    printf("The Armstrong Numbers are:\n");
    for (int i = n1; i <= n2; i++)
    {
        if (i==cube_sum(i))
        {
            printf("%d\n",i);
        }
    }
}
int cube_sum(int a)
{
    int rem,sum=0,st;
        
        while (a!=0)
        {
        rem = a%10;
        st = rem*rem*rem;
        sum = sum + st;
        a = a/10;
        }
        return sum;   
}
