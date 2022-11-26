#include <stdio.h>
#include <string.h>

void test(int, int, int);

int main()
{
    int x, y, z;
    int min;
    int max;
    int numbers[3];

    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("Enter third number: ");
    scanf("%d", &z);

    numbers[0] = x;
    numbers[1] = y;
    numbers[2] = z;
    min = numbers[2];
    max = numbers[2];

    for (int i = 0; i < 3; i++)
    {
        while (numbers[i] > max)
        {
            max = numbers[i];
            i++;
        }
    }

    for (int j = 0; j < 3; j++)
    {
        while (numbers[j] < min)
        {
            min = numbers[j];
            j++;
        }
    }
    printf("Max: %d\nMin: %d\n", max, min);

    //Testus uzkomentavau

    // test(1, 2, 3);
    // test(1, 3, 2);
    // test(3, 2, 1);
    // test(3, 1, 2);
    // test(2, 3, 1);
    // test(2, 1, 3);

    // test(-1, -2, -3);
    // test(-1, -3, -2);
    // test(-3, -2, -1);
    // test(-3, -1, -2);
    // test(-2, -3, -1);
    // test(-2, -1, -3);

    // test(0, 0, 0);


    return 0;
}

void test(int x, int y, int z)
{
    int min;
    int max;
    int numbers[3];

    numbers[0] = x;
    numbers[1] = y;
    numbers[2] = z;
    min = numbers[2];
    max = numbers[2];

    for (int i = 0; i < 3; i++)
    {
        while (numbers[i] > max)
        {
            max = numbers[i];
            i++;
        }
    }

    for (int j = 0; j < 3; j++)
    {
        while (numbers[j] < min)
        {
            min = numbers[j];
            j++;
        }
    }
    printf("Max: %d\nMin: %d\n", max, min);
    printf("\n");
}