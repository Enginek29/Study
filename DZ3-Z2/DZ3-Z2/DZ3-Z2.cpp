//  Найти наименьший общий делитель трех натуральных чисел.
// (1 будет считаться наименьшим общим делителем только в том случае, когда других общих делителей у заданных чисел нет).

#include <stdio.h>

int main()
{
    int N1 = 0;
    int N2 = 0;
    int N3 = 0;
    printf("Vvedite chisla N1=");
    scanf("%d", &N1);
    printf("Vvedite chisla N2=");
    scanf("%d", &N2);
    printf("Vvedite chisla N3=");
    scanf("%d", &N3);

    while (N1 != N2)
    {
        if (N1 > N2)
        {
            N1 -= N2;
        }
        else
        {
            N2 -= N1;
        }
    }
    while (N1 != N3)
    {
        if (N1 > N3)
        {
            N1 -= N3;
        }
        else
        {
            N3 -= N1;
        }
    }
    printf("NOD= %d", N1);
}

