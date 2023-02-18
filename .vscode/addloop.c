#include<stdio.h>
int main()
{
    int i,sum=0,num,t;
    float avg;
    printf("Enter a total Number to find average\n");
    scanf("%d",&t);
    printf("Enter all Number\n");
    for(i=1;i<=t;i++)
    {
        scanf("%d",&num);
        sum= sum + num;
    }
    printf("sum = %d\n",sum);
    avg=sum/t;
    printf("avg = %f",avg);
}