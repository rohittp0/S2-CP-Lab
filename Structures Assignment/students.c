#include <stdio.h>

#define NUM_STUDENTS 43

struct Student {
    
    char name[20];
    int roll_number;
    int mark1,mark2,mark3;
    int total;
    int pass_status;
};


void sortArray(struct Student students[])
{
    struct Student temp;
     for(int i=0;i<NUM_STUDENTS ; i++)
        for(int j=0;j<NUM_STUDENTS-i-1;j++)
            if(students[j].total < students[j+1].total)
            {
                temp = students[j];
                students[j]=students[j+1];
                students[j+1]=temp;
            }
}

void printResult(struct Student students[])
{
    printf("\nSl.no.\tRoll.No\t\tName\t\tTotal marks \tRank");

    for(int i=0;i<NUM_STUDENTS;i++)
        if (students[i].pass_status)
                printf("\n %-5d\t%-6d\t\t%-15s\t%-5d\t\t%-5d",i+1,students[i].roll_number,
                    students[i].name,students[i].total,i+1);            
}

int main()
{
  
    struct Student students[NUM_STUDENTS];

    for(int i=0;i<NUM_STUDENTS;i++)
    {
        printf("\nEnter roll number of student %d :",i+1);
        scanf("%d",&students[i].roll_number);
        printf("\nEnter name : " );
        
        scanf("%s",students[i].name);
        printf("\nEnter marks \n");
        scanf("%d %d %d",&students[i].mark1,&students[i].mark2,&students[i].mark3);

        students[i].total = students[i].mark1+students[i].mark2+students[i].mark3;
        students[i].pass_status =students[i].total >= 150;
    }

    sortArray(students);
    printResult(students);
    
    printf("\n");
    
    return 0;
}