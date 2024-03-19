#include <stdio.h>

int main()
{
    int choice;
    float length, breadth, area;
    printf("Enter the shape you want to find area of:\n");
    printf("1.square \n");
    printf("2.rectangle \n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter the length of the square\n");
        scanf("%f", &length);
        area = length * length;
        printf("Area of square is : %f", area);
    }
    else
    {
        printf("Enter the length and breadth of the rectangle\n");
        scanf("%f %f", &length, &breadth);
        area = length * breadth;
        printf("Area of rectangle is : %f \n", area);
    }
}