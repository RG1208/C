#include <stdio.h>

int main()
{

    int subject;

    printf("Enter the number of subjects you have passed \n");

    scanf("%d", &subject);

    if (subject == 2)
    {
        printf("You receive 45 points \n");
    }

    else if (subject == 1)
    {
        printf("You recieve 15 points \n");
    }
    else
    {
        printf("Wrong input \n");
    }
    return 0;
}