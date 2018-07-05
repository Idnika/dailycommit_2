#include <stdio.h>

int factorialmake(int x);

int main(void)
{
    int a;

    printf("input integer: ");
    scanf("%d", &a);

    printf("%d! is %d.\n", a, factorialmake(a));
    
    return 0;
}

int factorialmake(int x)
{
    int i;
    int result = 1;

    for (i = 1; i <= x; i++)
    {
        result *= i;
    }

    return result;
}