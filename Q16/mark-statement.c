#include <stdio.h>

#define NUM_STUDENTS 15

int main()
{
    struct Student
    {
        char name[25];

        int maths;
        int physics;
        int chemistry;

        int total;
    } students[NUM_STUDENTS];

    printf("Enter details of students :\n");
    printf("Name\tMaths\tPhysics\tChemistry\n");

    for (int i = 0; i < NUM_STUDENTS; students[i].total = students[i].maths + students[i].physics + students[i++].chemistry)
        scanf("%s %d %d %d", students[i].name, &students[i].maths, &students[i].physics, &students[i].chemistry);

    printf("\n\t\t\tStatement of Marks\n");
    printf("+-------------------------------------------------------------------------+\n");
    printf("|  SlNO  |       Name       |  Maths  |  Physics  |  Chemistry  |  Total  |\n");
    printf("|--------|------------------|---------|-----------|-------------|----------\n");

    struct Student s = students[0];
    for (int i = 0; i < NUM_STUDENTS; s = students[++i])
        printf("|  %3d   |    %8s      |   %3d   |    %3d    |     %3d     |   %3d   |\n",
               i + 1, s.name, s.maths, s.physics, s.chemistry, s.total);

    printf("+-------------------------------------------------------------------------+\n");

    return 0;
}