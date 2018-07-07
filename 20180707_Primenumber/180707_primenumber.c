#include <stdio.h>

int main(void)
{
    int a, b;
    int i;
    int j;
    int count = 0;

    printf("input small number: ");
    scanf("%d", &a);

    printf("input big number: ");
    scanf("%d", &b);

    for (i = a; i <= b; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            count++;
        }

        if (count == 2)
        {
            printf("%d\n", i);
        }
        count = 0;
    }

    return 0;
}