// Вычислить сумму элементов матрицы лежащих слева от побочной диагонали.

#include < stdio.h>
#include < stdlib.h >
#include < time.h >

int main() {
    constexpr int M = 7;
    constexpr int N = 7;
    int mas[N][M];
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            mas[i][j] = rand() % 10;
            printf("%d", mas[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    int s = 0;
        for (int i = 0; i < N-1; i++)
        {
             ++s;
             for (int j = 0; j < M-s; j++)
             {
             int ch= mas[i][j];
             sum += ch;
             }
        }
    printf("The sum is = %d", sum);
}
