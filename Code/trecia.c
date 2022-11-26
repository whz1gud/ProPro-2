#include <stdio.h>

int main()
{
    int num;
    char even[]= "Lyginis";
    char odd[]= "Nelyginis";

    printf("Ivesk skaiciu: \n");
    scanf("%d", &num);

    (num % 2 == 0) ? printf(even) : printf(odd);
    return 0;
}