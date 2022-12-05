/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer()
{
	int value;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &value);
	return value;
}

int get_max(int x, int y)
{
	if (x > y) return (x);
	else return (y);
}

int power(int x, int y)
{
	int i, result = 1;

	for (i = 0; i < y; i++)
		result *= x;
	return result;
}

int main(void)
{
	int a = get_integer();
	int b = get_integer();

	int result = power(a, b);

	printf("%d�� %d�� = %d \n", a, b, result);

	return 0;
}
*/
/*
#include <stdio.h>

void sub(void)
{
	int auto_count = 0;
	static int static_count = 0;

	auto_count++;
	static_count++;
	printf("auto_count=%d \n", auto_count);
	printf("static_count=%d \n", static_count);
}

int main(void)
{
	sub();
	sub();
	sub();
	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int factorial(int n);


int main(void)
{
	int x = 0, result;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &x);

	result = factorial(x);
	printf("%d!�� %d�Դϴ�.\n", x, result);

	return 0;

}

int factorial(int n)
{
	printf("factorial(%d)\n", n);

	if (n <= 1) return 1;
	else return n * factorial(n - 1);

}