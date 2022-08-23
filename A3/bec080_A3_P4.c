#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Point
{
    int x;
    int y;
    struct Point *next;
};

int main()
{
    struct Point *a, *b, *c, *start;

    a = (struct Point *)malloc(sizeof(struct Point));
    b = (struct Point *)malloc(sizeof(struct Point));
    c = (struct Point *)malloc(sizeof(struct Point));
    start = (struct Point *)malloc(sizeof(struct Point));

    printf("Enter the x-cordinate of point 1:");
    scanf("%d", &a->x);

    printf("Enter the y-cordinate of point 1:");
    scanf("%d", &a->y);

    printf("Enter the x-cordinate of point 2:");
    scanf("%d", &b->x);

    printf("Enter the y-cordinate of point 2:");
    scanf("%d", &b->y);

    printf("Enter the x-cordinate of point 3:");
    scanf("%d", &c->x);

    printf("Enter the y-cordinate of point 3:");
    scanf("%d", &c->y);

    start->next = a;
    a->next = b;
    b->next = c;

    printf("The x-cordinate of point 1 is %d\n", ((start->next)->x));
    printf("The y-cordinate of point 1 is %d\n", (start->next)->y);
    printf("The x-cordinate of point 2 is %d\n", ((start->next)->next)->x);
    printf("The y-cordinate of point 2 is %d\n", ((start->next)->next)->y);
    printf("The x-cordinate of point 3 is %d\n", (((start->next)->next)->next)->x);
    printf("The y-cordinate of point 3 is %d\n", (((start->next)->next)->next)->y);
    printf("The distance between point 1 and point 2 is %f \n", sqrt(pow((a->x - b->x),2) +pow((a->y - b->y),2)));
    printf("The distance between point 2 and point 3 is %f \n", sqrt(pow((b->x - c->x),2) +pow((b->y - c->y),2)));
    printf("The distance between point 1 and point 3 is %f \n", sqrt(pow((c->x - a->x),2) +pow((c->y - a->y),2)));

    return 0;
}