#include<stdio.h>
int fact(int n) //factorial function
{
if (n==0 || n==1) // if entered number is 1 or 0
return 1;
else
return n*fact(n-1); // recursive call
}
void main()
{
int n;
printf("Enter the Number:"); // input for number to find factorial
scanf("%d",&n);
int result= fact(n); // function call
printf("Factorial of %d is: %d",n,result); //displaying result
}
