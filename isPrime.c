#include <stdio.h>
#include <stdlib.h>

int isPrime(int number)
{
    int i;
    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            printf("Number %d is divisible by %d\n", number, i);
            return (0);
        }
    }
    return (1);
}

int main(int argc, char **argv)
{
    int num1;
    int i;

    if (argc < 2)
    {
        printf("This program Finds if a number is prime  \n");
        printf("Enter Num1: ");
        scanf("%d", &num1);
    }
    else
    {
        num1 = atoi(argv[1]);
    }
    if (isPrime(num1))
    {
        printf("NUmber %d is prime \n", num1);
    }
    else
    {
        printf("NUmber %d is not prime \n", num1);
    }
}
