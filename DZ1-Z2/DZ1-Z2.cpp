// DZ1-Z2.cpp : Необходимо вычеслить выражения 

#include <stdio.h>

int main()
{
	int a = 5;
	int c = 5;
	int b, d;
	printf("b=");
	scanf("%d", &b);
	printf("d=");
	scanf("%d", &d);
	a = a + b - 2;
	printf("a=%d\n", a);
	c = c + 1;
	printf("c=%d\n", c);
	d = c - a + d;
	printf("d=%d\n", d);
	a = a * c;
	printf("a=%d\n", a);
	c = c - 1;
	printf("c=%d\n", c);
	a = a / 10;
	c = c / 2;
	b = b - 1;
	d = d * (c + b + a);
	printf("a=%d c=%d b=%d d=%d", a, c, b, d);
	

}
