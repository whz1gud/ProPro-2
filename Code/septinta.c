#include <stdio.h>
#include <math.h>

int findMin(int, int);

int main()
{
    long long int num;
    int digits;
    int digit;
    int min;

    printf("Enter an Integer: ");
    scanf("%lli", &num);        // 6412

    while (num > 0)
    {
        num = num / 10;
        digits++;
    }

    min = num / pow(10, digits-1); // 6

    for (int i = digits; i > 0; i--)
    {
        newNum = newNum + findMin() * pow(10, i-1);    // 1000
    }

    return 0;
}

int findMin(int digits, int min)
{

    for (int j = 0; j < digits; j++)
    {
        while (num[j] < min)
        {
            min = num[j];
            j++;
        }
    }
    return min;
}