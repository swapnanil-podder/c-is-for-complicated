#include <stdio.h>

int main(void)
{
    int a;
    int *p = &a;

    *p = 5;
    printf("a = %d\n", a);

    *p = 7;
    printf("a = %d\n", a);

    return 0;
}
