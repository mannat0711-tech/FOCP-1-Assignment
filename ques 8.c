/*Q8. Develop a C program to generate the Fibonacci series up to ‘n’ terms, where each term is the sum of the two preceding ones*/
0, 1, 1, 2, 3, 5, 8, 13, ...

#include <stdio.h>
int main()
{
    int n, a, b, c = 0;
    printf("enter your max limit:");
    scanf("%d", &n);
    a = 0;
    b = 1;
    while (c <= n)
    {
        printf("%d", z);
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}
