#include <stdio.h>

int main(void)
{
    int grade1 = 80;
    int grade2 = 100;

    printf("grade1 value = %d\n", grade1);
    printf("grade2 value = %d\n", grade2);
    printf("grade1 address = %p\n", (void *)&grade1);
    printf("grade2 address = %p\n", (void *)&grade2);

    return 0;
}
