/*Q10. Implement a program to find who and how many students scored “99” in the marks array,
emphasising data scanning and frequency counting.*/
#include <stdio.h>

int main() {
    int marks[100], n, i, count = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);
  printf("Enter marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    
    printf("\nStudents who scored 99:\n");
    for (i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("→ Student %d (Position %d in array)\n", i + 1, i);
            count++;
        }
    }

   
    if (count == 0)
        printf("\nNo student scored 99.\n");
    else
        printf("\nTotal number of students who scored 99: %d\n", count);

    return 0;
}
