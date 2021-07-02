// Поменять местами цифры старшего и младшего разрядов данного натурального числа (например, из числа 3879 получится 9873)

#include <stdio.h>
#include <math.h>

int main()
{
    int Chislo_N = 0;
    int Chislo_N1 = 0;
    printf("Vvedite chislo N=");
    scanf("%d", &Chislo_N);
    int col = 0;
    int Chet = Chislo_N;
    while (Chet != 0)
    {
        Chet /= 10;
        col++;
    }
    printf("Number of digits = %d \n", col);
    int Nach_ch = Chislo_N / (int)pow(10,col-1);
    int Pos_ch = Chislo_N % 10;
    printf("%d \n", Nach_ch);
    printf("%d \n", Pos_ch);
    Chislo_N1 = (Chislo_N - Nach_ch * (int)pow(10, col-1)) + (Pos_ch * (int)pow(10, col-1)) - Pos_ch + Nach_ch;
    printf("output number = %d", Chislo_N1);
}

