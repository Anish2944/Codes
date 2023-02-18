#include<stdio.h>
int main()
{
    long int n,rem,sum=0,product=1;
    printf("Enter a SIX-DIGIT Number\n");
    scanf("%ld",&n);
    while (n!=0)
    {
      rem = n%10;
      if (rem%2==0)
      {
        sum = sum + rem;
      }
      else
      {
        product = product * rem;
      }
      n=n/10;  
    }
    printf("sum = %ld",sum);
    printf("\nproduct = %ld",product);
    
}