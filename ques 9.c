/*Q9. Design a C program to find the first occurrence of the score “99” in an array, focusing on linear
search and data retrieval techniques.*/
#include <stdio.h>

int main() {
    int scores[100], n, i, found = 0;

    printf("Enter number of scores: ");
    scanf("%d", &n);

    printf("Enter %d scores: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

   
    for (i = 0; i < n; i++) {
        if (scores[i] == 99) {
            found = 1;
            printf("First occurrence of score 99 found at position %d.\n", i + 1);
            break;  
        }
    }
    
    

    return 0;
}
