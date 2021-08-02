#include <stdio.h>

#define NUM_STUDENTS 5

int main()
{
    int students[NUM_STUDENTS];

    printf("Enter heights of students \n");
    for(int i=0; i<NUM_STUDENTS; scanf("%d", &students[i++]));

    int sum = 0, flag = 1;

    for(int i=0; i<NUM_STUDENTS; i++)
    {
        int tmp = -1;

        for(int j=0; j<NUM_STUDENTS-i-1 && flag; j++)
            if(students[j] > students[j+1])
            {
                tmp = students[j];
                students[j] = students[j+1];
                students[j+1] = tmp;
            }

        flag = tmp == -1;  
        sum += students[i];  
    }

    float median = NUM_STUDENTS % 2 ? (students[NUM_STUDENTS/2 + 1] + students[NUM_STUDENTS/2])/2 
                    : students[NUM_STUDENTS/2 + 1];

    printf("Maximum = %d \t Minimum = %d \t",students[NUM_STUDENTS-1],students[0]);
    printf("Mean = %f \t",1.0*sum/NUM_STUDENTS);
    printf("Median = %f \n",median);

    return 0;
}