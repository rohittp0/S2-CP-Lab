#include <stdio.h>

struct Result
{
    int rank;
    int iterations;
};

struct Result linear_search(int students[], int n, int mark)
{
    struct Result linear = {.rank = -1, .iterations = n};

    for (int i = 0; i < n; i++)
        if (mark == students[i])
        {
            linear.rank = i + 1;
            linear.iterations = i + 1;
            break;
        }

    return linear;
}

struct Result binary_search(int students[], int n, int mark)
{
    struct Result binary = {.rank = -1, .iterations = n};

    int first = 0, last = n;

    for (int mid = n / 2, i = 1; last-first > 1; i++, mid = (first + last) / 2)
        if (students[mid] == mark)
        {
            binary.rank = mid + 1;
            binary.iterations = i;
            break;
        }
        else if (students[mid] > mark)
            last = mid;
        else
            first = mid;

    return binary;
}

int main()
{
    int n;

    printf("Enter number of students : ");
    scanf("%d", &n);

    if (n < 1)
        return printf("No students in search list."), 1;

    int students[n];

    printf("Enter the mark of students: \n");
    for (int i = 0; i < n; scanf("%d", &students[i++]))
        ;

    printf("Enter the mark to search for: \n");

    int mark;
    scanf("%d", &mark);

    struct Result linear = linear_search(students, n, mark);
    struct Result binary = binary_search(students, n, mark);

    printf("\nResult of binary search\nIterations : %d\nRank : %d", binary.iterations, binary.rank);
    printf("\nResult of linear search\nIterations : %d\nRank : %d\n", linear.iterations, linear.rank);
}