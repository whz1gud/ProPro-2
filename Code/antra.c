#include <stdio.h>

int binaryToDec(long long int);
void decToBinary (int);

int main()
{
    printf("Binary: %-15lli -> Decimal: %d\n", 11011, binaryToDec(11011));
    printf("Binary: %-15lli -> Decimal: %d\n", 10010100, binaryToDec(10010100));
    printf("Binary: %-15lli -> Decimal: %d\n", 11001011010101, binaryToDec(11001011010101));
    printf("\n");

    decToBinary(37);
    decToBinary(241);
    decToBinary(2487);
    printf("\n");

    printf("Hex: 0x%-10x -> Decimal: %d\n", 0x6E2, 0x6E2);
    printf("Hex: 0x%-10x -> Decimal: %d\n", 0x6D33, 0x6D33);
    printf("Hex: 0x%-10x -> Decimal: %d\n", 0x123456, 0x123456);
    printf("\n");

    printf("Decimal: %-8d -> Hex: 0x%x\n", 243, 243);
    printf("Decimal: %-8d -> Hex: 0x%x\n", 2483, 2483);
    printf("Decimal: %-8d -> Hex: 0x%x\n", 4612, 4612);

}

int binaryToDec(long long int num)
{
    int decimal_num = 0, base = 1, rem;

    while (num > 0)
    {
        rem = num % 10;
        decimal_num = decimal_num + rem * base;
        num = num / 10;
        base = base * 2;
    }
    
    return decimal_num;
}

void decToBinary (int decNumber)
{
    int a[15];
    int i = 0;
    printf("Decimal: %-8d -> Binary: 0b", decNumber);

    for (i = 0; decNumber > 0; i++)
    {
        a[i] = decNumber % 2;
        decNumber = decNumber / 2;
    }

    for (i = i-1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}

