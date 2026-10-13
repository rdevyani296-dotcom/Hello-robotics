#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, mul;

    clrscr();

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    mul = a * b;

    printf("Multiplication = %d", mul);

    getch();
}
