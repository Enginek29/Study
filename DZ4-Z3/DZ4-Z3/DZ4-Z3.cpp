// Данна матрица размером 7х7. 
// Поменять местами К-й столбец с K-й строкой.  

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
    int n1 = 0;
    int n2 = 0;
    printf("Select a column \n");
    scanf("%d", &n1);
    printf("Select a stock \n");
    scanf("%d", &n2);
    for (int i = 0; i < N; i++)
    {
        int ch = mas[i][n1 - 1];
        mas[i][n1 - 1] = mas[n2 - 1][i];
        mas[n2 - 1][i] = ch;
    }
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d", mas[i][j]);
        }
        printf("\n");
    }
}