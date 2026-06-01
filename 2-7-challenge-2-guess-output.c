#include <stdio.h>

int main(void)
{
    int number1 = 5;
    int number2 = 7;
    int *ptra = &number1;
    int *ptrb = &number2;

    printf("number1 = %d\n", number1);
    printf("number2 = %d\n", number2);
    printf("*ptra = %d\n", *ptra);
    printf("*ptrb = %d\n", *ptrb);

    *ptra += 1;
    *ptrb += 3;

    printf("number1 = %d\n", number1);
    printf("number2 = %d\n", number2);
    printf("*ptra = %d\n", *ptra);
    printf("*ptrb = %d\n", *ptrb);

    return 0;
}
