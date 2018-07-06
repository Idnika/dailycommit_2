#include <stdio.h>

void get_linearf(int x1, int y1, int x2, int y2);

int main(void)
{
    int x1, x2, y1, y2;

    printf("input first dot: ");
    scanf("%d %d", &x1, &y1);

    printf("input second dot: ");
    scanf("%d %d", &x2, &y2);

    get_linearf(x1, y1, x2, y2);

    return 0;
}

void get_linearf(int x1, int y1, int x2, int y2)
{
    double inclination;
    double yintercept;

    inclination = (y2 - y1) / (x2 - x1);
    yintercept = y1 - (x1 * inclination);
    
    printf("The linear function is y = %fx + %f.\n", inclination, yintercept);
}