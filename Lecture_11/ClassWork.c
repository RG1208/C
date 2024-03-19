#include <stdio.h>
int main()
{
    int age;
    printf("enter your age \n");
    scanf("%d", &age);

    switch (age)
    {
    case 13:
        printf("Your age is 13 \n");
        break;

    case 10:
        printf("Your age is 10 \n");
        break;

    default:
        printf("Invalid age \n");
        break;
    }
    return 0;
}