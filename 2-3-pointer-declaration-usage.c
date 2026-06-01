#include <stdio.h>

int main(void)
{
    int a = 5;
    int *p = &a;

    printf("a = %d\n", a);
    printf("&a = %p\n", (void *)&a);
    printf("p = %p\n", (void *)p);
    printf("*p = %d\n", *p);

    *p = 10;
    printf("a after *p = 10: %d\n", a);

    return 0;
}
