// DZ3-Z1.cpp :Дано натуральное число N. Составить программу для определения количества цифр в этом числе.

#include <stdio.h>

int main()
{
    int Chislo_N = 0;
    printf ("Vvedite chislo N=");
    scanf ("%d", &Chislo_N);
    int col = 0;
    while (Chislo_N!=0)
    {
        Chislo_N /= 10;
        col++;
    }
    printf("Number of digits = %d", col);
}
