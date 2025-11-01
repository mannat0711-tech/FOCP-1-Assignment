/*Q3. Design a C program to subtract two integers without using the minus (-) operator, applying
bitwise operators. Highlight how such logic can be used in low-level arithmetic operations in
embedded systems or processors.*/
#include<stdio.h>
#include<math.h>
int main()
{
  int n1,n2,diff;
printf("enter the two numbers:");
scanf("%d%d",&n1,&n2);
diff=n1+(~n2+1);
printf("the difference of the two numbers are:%d",diff);

return 0;
}
