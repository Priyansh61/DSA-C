#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct student_record
{
    char name[30];
    int roll_no;
    int total_marks;
};

int main()
{
    int n;
    float sum = 0;
    printf("ENTER THE NUMBER OF THE STUDENT IN THE CLASS:");
    scanf("%d", &n);
    struct student_record *class[n];

    for (int i = 0; i < n; i++)
    {
        class[i] = (struct student_record *)malloc(sizeof(struct student_record));
        if (class[i] == NULL)
        {
            printf("Cannot allocate the memory");
            return 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("Student name:");
        scanf("%s", &class[i] -> name);
        printf("student roll number:");
        scanf("%d", &class[i] -> roll_no);
        printf("student total marks:");
        scanf("%d", &class[i] -> total_marks);
        sum += (class[i] -> total_marks);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Student name:%s\n", class[i] -> name);
        printf("student roll number:%d\n", class[i] -> roll_no);
        printf("student total marks:%d\n", class[i] -> total_marks);
    }

    printf("student average marks:%f",sum/n);

    return 0;
}