#include<stdio.h>
int main()
{
    int rem,n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        if(rem==0)
        printf("Zero");
        else if(rem==1)
        printf("One");
        if(rem==2)
        printf("Two");
        else if(rem==3)
         printf("Three");
        else if(rem==4)
         printf("Four");
        else if(rem==5)
         printf("Five");
        else if(rem==6)
         printf("Six");
        else if(rem==7)
         printf("Seven");
        else if(rem==8)
         printf("Eight");
        else if(rem==9)
         printf("Nine");
         n/=10;
         printf("\t");
    }

}