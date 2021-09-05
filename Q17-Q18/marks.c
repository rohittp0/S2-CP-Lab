#include <stdio.h>
#include <stdlib.h>

#define NUM_STUDENTS 5

int main()
{
    int *marks = (int *)calloc(NUM_STUDENTS, sizeof(int));
    int average = 0, toppers = 0;

    printf("Enter marks of students\n");
    for (int i = 0; i < NUM_STUDENTS; scanf("%d", (marks + i++)))
        ;

    for (int i = 0; i < NUM_STUDENTS; average += *(marks + i++))
        ;

    average /= NUM_STUDENTS;

    for (int i = 0; i < NUM_STUDENTS; toppers += *(marks + i++) >= average)
        ;

    printf("Number of students who scored above average is %d \n", toppers);

    free(marks);
    return 0;
}