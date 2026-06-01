#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 7;
    int *p = &a;

    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    printf("Address of a: %p\n", (void *)&a);
    printf("Address of b: %p\n", (void *)&b);
    printf("Pointer p points to a: %p\n", (void *)p);

    return 0;
}
