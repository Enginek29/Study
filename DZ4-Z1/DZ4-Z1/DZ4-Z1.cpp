// Поменять местами максимальный и последний отрицательный элементы массива M(40)

#include <stdio.h>

int main()
{
    const int arr = 10;
    int array[arr];
    for (int v = 0; v < arr; v++)
    {
        printf("x[%i]: ", v);
        scanf("%d", &array[v]);
    }
      for (int j = 0; j < arr; j++)
    {
       printf(" %d", array[j]);
    }
    printf(" \n");
    int i;
    int index_max = 0;
    int index_min = 0;
    int max = array[0];
    int min = array[0];
    for (i = 1; i < arr; i++)
    {
        if (max < array[i])
        {
            max = array[i];
            index_max = i;
        }
        if (min > array[i])
        {
            min = array[i];
            index_min = i;
        }
    }
    int temp = array[index_max];
    array[index_max] = array[index_min];
    array[index_min] = temp;
    for (int j = 0; j < arr; j++)
    {
        printf(" %d", array[j]);
    }
}