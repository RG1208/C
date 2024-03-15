#include <stdio.h>
int main()
{
    // a is the number given and i is the integer
    int a, i;
    printf("Type the number you want multiplication of:\n ");
    scanf("%d", &a);

    printf("The multiplication table of %d is \n", a);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", a, i, a * i);
    }

    return 0;
}