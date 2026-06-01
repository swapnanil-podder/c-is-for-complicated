#include <stdio.h>

int main(void)
{
    int num = 5;
    double pi = 3.8;
    int *ptra = &num;

    printf("&num = %p\n", (void *)&num);
    printf("&pi = %p\n", (void *)&pi);
    printf("ptra = %p\n", (void *)ptra);
    printf("*ptra = %d\n", *ptra);

    return 0;
}
