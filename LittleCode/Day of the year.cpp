#include<stdio.h>
int main()
{
	int years, months, days, i, t;
	int sum = 0, a[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	scanf("%d", &t);
	for (int n = 0; n < t; n++)
	{
		scanf("%d/%d/%d", &years, &months, &days);
		if ((years % 4 == 0 && years % 100 != 0) || years % 400 == 0)
		{
			if (months > 2)
				sum = 1;
		}
		for (i = 0; i < months - 1; i++)
			sum += a[i];
		sum = sum + days;
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}
