/* // Lab : �µ� ��ȯ �Լ�
#include <stdio.h>
double FtoC(double temp_f);

int main(void)
{
	double c, f;
	f = 32.0;
	c = FtoC(f); // �Լ� ȣ��
	printf("ȭ���µ� %lf�� �����µ� %lf�� �ش��Ѵ�. \n", f, c);
	return 0;
}

double FtoC(double temp_f) //�Լ� ����
{
	double temp_c;
	temp_c = (5.0 * (temp_f - 32.0)) / 9.0;
	return temp_c;
}
*/
 /* // Lab : �Ҽ� �˻� �Լ� �ۼ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int check_prime(int);

int main(void)
{
	int k;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &k);
	if (check_prime(k) == 1) printf("�Ҽ��Դϴ�. \n");
	else printf("�Ҽ��� �ƴմϴ�. \n");
	return 0;
}

int check_prime(int n)
{
	int is_prime = 1;
	for (int i = 2; i < n; ++i)
	{
		if (n % i == 0)
		{
			is_prime = 0;
			break;
		}
	}
	return is_prime;
}
*/
/* // Lab : �Ҽ��� �� ã�� 
#include <stdio.h>
int check_prime(int n);

int main(void)
{
	int n, flag = 0;
	printf("���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	for (int i = 2; i < n; i++)
	{
		if (check_prime(i) == 1)
		{
			if (check_prime(n - i) == 1)
			{
				printf("%d = %d + %d \n", n, i, n - i);
				flag = 1;
			}
		}
	}
	if (flag == 0)
		printf("%d�� �Ҽ����� ������ ǥ�õ� �� �����ϴ�.\n", n);
	return 0;
}

int check_prime(int n)
{
	int is_prime = 1;	//�ϴ� �Ҽ���� �����Ѵ�.
	for (int i = 2; i < n; ++i)
	{
		if (n % i == 0)
		{
			is_prime = 0;
			break;
		}
	}
	return is_prime;
}
*/
/* // lab : �Ǻ���ġ ���� ���(��ȯ ����)
#include <stdio.h>

int fibbonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return (fibbonacci(n - 1) + fibbonacci(n - 2));
	}
}

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", fibbonacci(i));
	}
}
*/
/* // lab : �ζ� ��ȣ �����ϱ� 
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 45

int main(void)
{
	int i, k, lotto[6] = { 0 };
	int dup_check[MAX + 1] = { 0 };

	srand(time(NULL));
	for (i = 0; i < 6; i++)
	{
		k = 1 + (rand() % MAX);
		while (dup_check[k] == 1)
			k = 1 + (rand() % MAX);
		lotto[i] = k;
		dup_check[k] = 1;
		printf("%d ", lotto[i]);
	}
	return 0;
}
*/
/* // lab : ���Ϸ� �޼� ����ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

double power(int x, int y)
{
	double result = 1.0;
	for (int i = 0; i < y; i++)
		result *= x;
	return result;
}

double factorial(int n)
{
	double result = 1.0;
	if (n <= 1) return 1;
	for (int i = 1; i <= n; i++)
		result *= i;
	return result;
}

int main(void)
{
	double sum = 0.0;
	int x, n;
	printf("x�� n�� ���� �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &n);
	for (int i = 0; i <= n; i++)
		sum += power(x, i) / factorial(i);

	printf("e^%d = %.3lf\n", x, sum);
	return 0;
}
*/
/* // Mini Project : ATM �����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int check_money(void);
int input_money(int n);
int output_money(int n);
int my_money = 0;

int main(void)
{
	int money;
	int select;
	printf("**********Welcome to �ܼ�Ʈ ATM********** \n");
	while (1)
	{
		printf("****�ϳ��� �����Ͻÿ�**** \n");
		printf("<1> �ܰ� Ȯ�� \n");
		printf("<2> �Ա� \n");
		printf("<3> ���� \n");
		printf("<4> ���� \n");
		scanf("%d", &select);
		if (select == 1)
		{
			check_money();
		}
		else if (select == 2)
		{
			printf("****�Ա� �ݾ��� �Է��Ͻÿ� \n");
			scanf("%d", &money);
			input_money(money);
		}
		else if (select == 3)
		{
			printf("****���� �ݾ��� �Է��Ͻÿ� \n");
			scanf("%d", &money);
			output_money(money);
		}
		else break;
	}

	return 0;

}

int check_money()
{
	printf("���� �ܰ�� %d �Դϴ�.", my_money);
	return my_money;
}

int input_money(int n)
{
	my_money += n;
	return my_money;
}

int output_money(int n)
{
	my_money -= n;
	return my_money;
}
*/