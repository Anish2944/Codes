#include<stdio.h>

main()
{
    float income;
    printf("Enter your Income \n");
    scanf("%f",&income);
    if(income>250000 && income<= 500000)
    {
    printf("You have to pay tax %f.",(income*5)/100);
    }
    else if(income>500000 && income<=1000000)
    {
    printf("You have to pay tax %f.", (income*20)/100);
    }
    else if (income>1000000)
    {
        printf("You have to pay tax %f.",(income*30)/100);
    }
    else if (income<=250000)
    {
        printf("You don't have to pay tax.");   
    }
    return 0;
}