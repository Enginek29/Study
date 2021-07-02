//Определить местоположение элементов массива А (30), не встречающихся в массиве В (15).

#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 

int main(void)
{
    constexpr int n = 3;
    constexpr int m = 2;
    int masA[n];                           // МАссив А
    int masB[m];                           // Массив B
    int counter = 0;

    for (int i = 0; i < n; i++)            //поэлементный ввод массива А
    {
        printf("vvedite A[%i]: ", i);
        scanf("%d", &masA[i]);
    }
    for (int j = 0; j < m; j++)            //поэлементный ввод массива В
    {
        printf("vvedite B[%i]: ", j);
        scanf("%d", &masB[j]);
    }
    printf("\n");
    for (int k = 0; k <n; k++)            //вывод массива A
    {
        printf(" %d", masA[k]);
    }
    printf("\n");
    for (int l = 0; l < m; l++)          //вывод массива B
    {
        printf(" %d", masB[k]);
    }
    printf("\n");


    constexpr int INF = 30; 
    int final[INF];
    for (int i = 0; i < INF; i++)
     final[i] = INF;
    for (int i = 0; i < n; i++)//поэлементное сравнение каждого элемента массива Б с одним элементом А, а цикле. Соответсвенно, в итоге сравниваем всё
    {
        for (int j = 0; j < m; j++)
        {
            if (masA[i] == masB[j]) counter++;
            if (counter == 0) final[i] = i;
            else counter = 0;
        }
    }
    for (int i = 0; i < INF; i++)
    {
        printf("%i ", final[i]);
    }
   //getch();
    
}