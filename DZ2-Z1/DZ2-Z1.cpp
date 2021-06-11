// Решить уравнение.

#include <stdio.h>
#include <math.h>

const double M_PI = 3.14;


int main()

{
	double x;                                               // вводимое значение
	double y_rad;                                           // выводимое значение в радианах
	double y_grad;                                          // выводимое значение в градусах
	double znach_cos;
	double znach_sin;
	double znach_log;
	double znach_e;
	printf("Plese enter x:");
	scanf("%lf", &x);
	znach_cos = (2 * cos(x - (M_PI / 6))) + sqrt(2);              // вычисляем значение делимого
	znach_log = 1 / (2 * log(x));                                 // вычисляем значение делителя с ln
	znach_sin = (1 - cos(2 * pow(x, 2))) / 2;                     // вычисляем значение делителя с sin
	znach_e = exp(3 * x);                                         // вычисляем значение e
	y_rad = (znach_cos / (znach_log + znach_sin)) * znach_e;      // выводимое значение в радианах
	y_grad = y_rad * M_PI / 180;                                  // ввыводимое значение в градусах

	printf("In radians %f\n", y_rad);
	printf("In degrees %f\n", y_grad);

	return 0;
}