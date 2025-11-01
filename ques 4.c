/*Q4. Implement a C program to swap two numbers using four different methods, demonstrating
diverse approaches such as arithmetic, bitwise XOR, pointer manipulation, and temporary variable
usage — a key skill in memory and variable management.*/
//1. XOR bitwise operator
#include<stdio.h>
#include<math.h>
int main()
{
  int A1,A2;
  printf("Enter the two numbers u want to swap:");
  scanf("%d%d",&A1,&A2);
 A1=A1^A2;
A2=A1^A2;
A1=A1^A2;
printf("the first number after swaping is:%d \n the second number after swaping is:%d",A1,A2);
return 0;
}
//2. by arithmetic
#include<stdio.h>
#include<math.h>
{
int A1,A2;
printf("enter the two numbers you want to swap:");
scanf("%d%d",&A1,&A2); 
A1=A1+A2;
A2=A1+A2;
A1=A1-A2;
printf("The first number after swaping is=%d\n the second number after swaping is=%d",A1,A2);
return 0;
}

//3.by temporary variable
#include<stdio.h>
#include<math.h>
int main()
{
  int A1,A2,A3;
printf("enter the number you want to swap:");
  scanf("%d%d",&A1,&A2);
A3=A1;
A1=A2;
A2=A3;


printf("the first number after swaping is:%d\n the second numbeer after swaping is:%d",A1,A2);
return 0;
}

  

  
