#include "main.h"

/**
 * myprint_binary - function that prints int in binary 
 * @n: integer 
 * Return: 1
 */
int myprint_binary(unsigned int n)
{
	unsigned int dig, qoutt, checks;
	unsigned int ex = 1, nums = 0;

	qoutt = n;
	while (qoutt >= 2)
	{
		qoutt /= 2;
		ex *= 2;
	}
	while (n >= 2 && ex >= 2)
	{
		dig = n / ex;
		nums += my_putchar('0' + dig);
		checks = n / (ex / 2);
		while (checks % 2 == 0 && ex >= 2)
		{
			nums += my_putchar('0');
			ex /= 2;
			checks = n / (exp / 2);
		}
		n %= exp;
		ex /= 2;
	}
	nums += my_putchar('0' + n);
	return (nums);
}
/**
 * myprint_int - function that prints int to input output
 * @i: int
 * Return: 1
 */
int myprint_int(int i)
{
	int dig, qout, ceck;
	int ex = 1, t = 0;

	if (i < 0)
	{
		t += my_putchar('-');
		i *= -1;
	}

	qoutt = i;
	while (qoutt >= 10)
	{
		qoutt /= 10;
		ex *= 10;
	}
	while (i >= 10 && ex >= 10)
	{
		dig = i / ex;
		t += my_putchar('0' + dig);
		ceck = i / (ex / 10);
		while (ceck % 10 == 0 && ex >= 100)
		{
			t += my_putchar('0');
			ex /= 10;
			ceck = i / (ex / 10);
		}
		i %= ex;
		ex /= 10;
	}
	t += my_putchar('0' + i);
	return (t);
}
