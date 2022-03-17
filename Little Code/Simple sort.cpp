#include<stdio.h>
void downsort(int a[], int size);
void upsort(int a[], int size);
int main()
{
	int a[11], n, m, i, j, k, flag, count;
	scanf("%d", &n);
	while (n--)
	{
		flag = 1;
		for (i = 0; i < 10; i++)
		{
			scanf("%d", &a[i]);
		}
		scanf("%d", &m);
		for (i = 0; i < 10; i++)
		{
			if (a[i] == m)
			{
				flag = 0;
			}
		}
		if (m % 2 == 0 && flag)
		{
			a[10] = m;
			downsort(a, 11);
			for (i = 0; i < 11; i++)
			{
				if (i == 10) printf("%d\n", a[i]);
				else printf("%d ", a[i]);
			}
		}
		else if (m % 2 && flag == 0)
		{
			upsort(a, 10);
			for (i = 0; i < 10; i++)
			{
				if (a[i] != m && i != 9) printf("%d ", a[i]);
				else if (a[i] != m && i == 9) printf("%d\n", a[9]);
			}
		}
		else
		{
			count = 0;
			downsort(a, 10);
			for (i = 0; i < 10; i++)
			{
				if (a[i] % 2)
				{
					printf("%d ", a[i]);
					count++;
				}
			}
			count = 10 - count;
			for (i = 0; i < 10; i++)
			{
				if (a[i] % 2 == 0 && count > 1)
				{
					printf("%d ", a[i]);
					count--;
				}
				else if (a[i] % 2 == 0 && count == 1)
				{
					printf("%d\n", a[i]);
				}
			}
		}
	}
	return 0;
}

void downsort(int a[], int size)
{
	int i, j, k, t;
	for (i = 0; i < size - 1; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (a[k] < a[j])
				k = j;
		}
		if (k != i)
		{
			t = a[i];
			a[i] = a[k];
			a[k] = t;
		}
	}
}

void upsort(int a[], int size)
{
	int i, j, k, t;
	for (i = 0; i < size - 1; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (a[k] > a[j])
				k = j;
		}
		if (k != i)
		{
			t = a[i];
			a[i] = a[k];
			a[k] = t;
		}
	}
}


