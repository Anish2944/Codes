#include<stdio.h>
#include<math.h>
int main()
{
     float a,b,c;
     float root1,root2;
     float rootpart,deno;
    printf("Enter the coefficient of equation\n");
    scanf("%f\n%f\n%f",&a,&b,&c);
    rootpart = sqrt(b*b - 4*a*c);
    deno = 2*a;
    root1 = (- b + rootpart) / deno;
    root2 = (- b - rootpart) / deno;
    printf("root1=%f\nroot2=%f",root1,root2);
    return 0;

}