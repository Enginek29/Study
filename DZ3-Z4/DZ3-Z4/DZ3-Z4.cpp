// Перевести число из десятичной системы счисления в двоичную.

#include <stdio.h>
#include <math.h>

int main()
{
    int Chislo_N = 0;
    printf("Enter the number N=");
    scanf("%d", &Chislo_N);
    int bin_ch = 0;
    int ch = 0;
    while (Chislo_N != 0)
    {
        int st = 0;
        ch = Chislo_N % 2;
        Chislo_N /= 2;
        bin_ch = 10 * bin_ch + ch;
    }
    int bin_end = 0;
    while (bin_ch > 0)
    {
        int v = bin_ch % 10;
        bin_ch = bin_ch / 10;
        bin_end = bin_end * 10 + v;
    }
    printf("Numbe= %d", bin_end);
}

