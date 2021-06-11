// Расчитать площади круга, треугольника, квадрата и сравнить эти значение между собой.вывести наибольшее значение. 
#include <stdio.h>
#include <math.h>

const double M_PI = 3.14;


int main()
{
    double R_circle;     // Радиус круга
    double a_triangle;   // Сторона треугольника
    double d_square;     // Сторона квадрата
    double S_circle;     // Площадь круга
    double S_triangle;   // Площадь треугольника
    double S_square;     // Площадь квадрата

  //Получение значения радиуса круга
    printf("Plese enter radius circle:");
    scanf("%lf/n", &R_circle);

    //Получение значения стороны треугольника  
    printf("Plese enter side triangle:");
    scanf("%lf/n", &a_triangle);

    //Получение значения стороны квадрата
    printf("Plese enter side square:");
    scanf("%lf/n", &d_square);

    S_circle = M_PI * pow(R_circle, 2);             // Расчет площади круга
    S_triangle = (pow(a_triangle, 2) * sqrt(3)) / 4;    // Расчет площади треугольника   
    S_square = d_square * d_square;                // Расчет площали квадрата

    //Вывод результата
    printf("Largest area - ");
    S_circle >= S_triangle ? S_circle >= S_square ? printf("circle= %f", S_circle) : printf("square = %f", S_square) : S_triangle >= S_square ? printf("triangle= %f", S_triangle) : printf("square = %f", S_square);


    return 0;
}
