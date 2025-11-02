/*Q18. Develop a program to identify and print duplicate elements in an array, or print “-1” if no
duplicates exist, applying frequency detection and data validation.
Examples:
Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
Output: 2 10 11
Input: {5, 40, 1, 40, 100000, 1, 5, 1}
Output: 5 40 1*/
#include <stdio.h>
int main()
{
    int arr[100], n, i, j;
    int count, hasDuplicate = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nOriginal array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\nDuplicate elements:\n");
    for (i = 0; i < n; i++)
    {
        count = 1;

        if (arr[i] == -1)
            continue;

        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;
            }
        if (count > 1)
        {
            printf("%d ", arr[i]);
            hasDuplicate = 1;
        }
    }
    if (!hasDuplicate)
    {
        printf("-1");
    }
    printf("\n");
    return 0;
}
