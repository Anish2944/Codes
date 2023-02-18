/*Accept any two number ,if the first number is greater than second then print then print the sum of these two
 numbers,otherwise print their difference.write this program using ternary operator.*/
 #include<stdio.h>
 int main()
 {
    int num1,num2,res;
    printf("Enter any two number\n");
    scanf("%d\n%d",&num1,&num2);
    res = num1>num2 ? num1 + num2 : num1 - num2;
    printf("%d",res);

 }