#include<stdio.h>
int pro_dig(int n);
void main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("%d",num);
    printf("%d",pro_dig(num));

}
int pro_dig(int n)
{
    int dig,product;
    do
    {
       for(product=1;n!=0;n/=10)
        {
            dig=n%10;
            product*=dig;
        }
        printf("-->%d",product);
        n=product;
    } while (n/10!=0);
    printf("\n");
}