#include<stdio.h>
int main()
{
    int n,count,sum=0;
    
    for (int i = 1; i <= 100; i++)
    {
        count=0;
        for (int j = 2; j <= i; j++)
        {
            if (i%j==0) 
            count++;
        }
            if(count==1)
            sum = sum + i;
    }
            printf("%d",sum);
}
