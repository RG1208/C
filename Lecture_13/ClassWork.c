#include <stdio.h>

int main()
{
    int i, index = 0;
    printf("Enter a number\n");
    scanf("%d", &i);
    printf("Here's your counting\n");
    do
    {
        printf("%d\n", index + 1);
        index = index + 1;
    } while (index < i);

    return 0;
}