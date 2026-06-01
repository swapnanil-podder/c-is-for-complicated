#include <stdio.h>

void find_min_max(int number1, int number2, int *min, int *max)
{
    if (number1 > number2)
    {
        *min = number2;
        *max = number1;
    }
    else
    {
        *min = number1;
        *max = number2;
    }
}

int main(void)
{
    int a = 5;
    int b = 7;
    int min = 0;
    int max = 0;

    find_min_max(a, b, &min, &max);
    printf("min = %d, max = %d\n", min, max);

    return 0;
}
