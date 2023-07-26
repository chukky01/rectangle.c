//begin by calling up the stdio.h and the math.h 
#include <stdio.h>
#include <math.h>

int main()
{
    //create an int of the length, area, breadth and perimeter
    int l;
    int b;
    int AREA;
    int PERIMETER;

    //ask the user to enter two numbers and then tell them the two numbers that they entered
    printf("ENTER TWO NUMBERS AND THE AREA AND PERIMETER WILL BE PRINTED OUT\n");

    printf("Enter the first number: ");
    scanf("%d", &l);
    printf("You entered %d\n", l);
    printf("\n");

    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("You entered %d\n", b);

    //define the protocol for getting the perimeter and the area
    PERIMETER = 2 * (l + b);
    AREA = l * b;
    printf("\n");

    //print out the result of the two numbers entered
    printf("The perimeter of the two given numbers is %d\n", PERIMETER);
    printf("The area of the two given numbers is %d\n", AREA);

    return 0;
}
