/*Q1. Develop a C program to check whether a given number is an Armstrong number or not,
demonstrating understanding of number manipulation and digit-based computations used in digital
verification systems.*/
#include<stdio.h>
#include<math.h>
int main()
{
  int n, originalnum,rem,result=0;
printf("Enter an integer:");
scanf("%d",&n);
originalnum=n;
int count=0;
while(n!=0)
{
n=n/10;
count+=1;
}
n=originalnum;
while(originalnum!=0)
{
rem=originalnum%10;
result+=pow(rem,count);
originalnum/=10;
}
if (n==result)
{
printf("The given number is an armstrong number");
}
else 
  printf("the given number is not an armstrong number");
return 0;
}
