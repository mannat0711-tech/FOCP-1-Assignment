/*Q12. Develop a C program to find the maximum and minimum scores in an array, applying
comparative logic for ranking and analysis*/
#include <stdio.h>

int main() {
    int scores[100], a, i;
    int max, min;
    printf("Enter number of scores: ");
    scanf("%d", &a);

    printf("Enter %d scores:\n", a);
    for (i = 0; i < a; i++) {
        scanf("%d", &scores[i]);
    }

    max = min = scores[0];
    for (i = 1; i < a; i++) {
        if (scores[i] > max)
            max = scores[i];
        if (scores[i] < min)
            min = scores[i];
    }

    printf("\nHighest (Maximum) Score: %d\n", max);
    printf("Lowest (Minimum) Score: %d\n", min);

    return 0;
}
