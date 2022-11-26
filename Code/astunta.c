#include <stdio.h>
#include <ctype.h>

void binaryToDec();
void decToBinary();
void hexToDec();
void decToHex();
void binToHex();
void hexToBin();

int main()
{
    binaryToDec();
    printf("\n");

    decToBinary();
    printf("\n");

    hexToDec();
    printf("\n");

    decToHex();
    printf("\n");

    binToHex();
    printf("\n");

    hexToBin();
    printf("\n");
}

void binaryToDec()
{
    int decimal_num;
    int base = 1;
    int rem;
    long long int binNum;

    printf("Enter a Binary number: ");
    scanf("%lli", &binNum);

    printf("Binary: 0b%lli -> ", binNum);

    while (binNum > 0)
    {
        rem = binNum % 10;
        decimal_num = decimal_num + rem * base;
        binNum = binNum / 10;
        base = base * 2;
    }
    printf("Decimal: %d\n", decimal_num);
}

void decToBinary()
{
    int a[30];
    int i = 0;
    int decNumber;

    printf("Enter a Decimal number: ");
    scanf("%d", &decNumber);

    printf("Decimal: %d -> \tBinary: 0b", decNumber);

    for (i = 0; decNumber > 0; i++)
    {
        a[i] = decNumber % 2;
        decNumber = decNumber / 2;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}

void hexToDec()
{
    unsigned int hexNum;
    printf("Enter a Hexadecimal number:");
    scanf("%x", &hexNum);

    printf("Hexadecimal: 0x%X -> Decimal: %d", hexNum, hexNum);
}

void decToHex()
{
    int decNum;

    printf("Enter a Decimal number:");
    scanf("%d", &decNum);

    printf("Decimal: %d -> Hexadecimal: %X", decNum, decNum);
}

void binToHex()
{
    int Decimal_num = 0;
    int Base = 1;
    int Rem = 0;
    long long int BinNum = 0;

    printf("Enter a Binary number: ");
    scanf("%lli", &BinNum);

    printf("Binary: 0b%lli -> ", BinNum);

    while (BinNum > 0)
    {
        Rem = BinNum % 10;
        Decimal_num = Decimal_num + Rem * Base;
        BinNum = BinNum / 10;
        Base = Base * 2;
    }
    printf("Hexadecimal: %X\n", Decimal_num);
}

void hexToBin()
{
    int a[30];
    int i = 0;
    int hexNum;

    printf("Enter a Hexadecimal value: ");
    scanf("%x", &hexNum);

    printf("Hexadecimal: 0x%x -> Binary: 0b", hexNum);

    for (i = 0; hexNum > 0; i++)
    {
        a[i] = hexNum % 2;
        hexNum = hexNum /2;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}