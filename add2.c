#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int num1, num2;

    if (argc < 3)
    {
        printf("This program adds 2 numbers \n");
        printf("Enter Num1: ");
        scanf("%d", &num1);

        printf("Enter Num2: ");
        scanf("%d", &num2);
    }

    else
    {

        num1 = atoi(argv[1]);
        num2 = atoi(argv[2]);
    }

    printf("Sum of %d and %d is %d\n", num1, num2, num1 + num2);
}
