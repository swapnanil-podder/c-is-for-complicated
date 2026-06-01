#include <stdio.h>

void swap(int number1, int number2)
{
    int temp = number1;
    number1 = number2;
    number2 = temp;

    printf("Inside swap before/after by value:\n");
    printf("number1 = %d, number2 = %d\n", number1, number2);
}

int main(void)
{
    int a = 5;
    int b = 7;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
