#include <stdio.h>

int main(void)
{
    int a = 5;
    int *p = NULL;

    printf("p before initialization: %p\n", (void *)p);

    p = &a;
    printf("p after initialization: %p\n", (void *)p);
    printf("*p = %d\n", *p);

    return 0;
}
