#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[1002], b[1002];
	int t, num1[1001], num2[1001], i, j, k, l1, l2, la, lb, max;
	cin >> t;
	for (i = 1; i <= t; i++)
	{
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		memset(num1, 0, sizeof(num1));
		memset(num2, 0, sizeof(num2));
		scanf("%s", a);
		scanf("%s", b);
		la = strlen(a);
		lb = strlen(b);
		for (j = la - 1, k = 0; j >= 0; j--, k++)
		{
			num1[k] = a[j] - '0';
		}
		for (j = lb - 1, k = 0; j >= 0; j--, k++)
		{
			num2[k] = b[j] - '0';
		}
		printf("Case %d:\n", i);
		printf("%s + %s = ", a, b);
		if (la >= lb)
		{
			max = la;
			for (j = 0; j < la; j++)
			{
				num1[j] += num2[j];
				if (num1[j] >= 10)
				{
					num1[j] -= 10;
					num1[j + 1]++;
				}
			}
		}
		else
		{
			max = lb;
			for (j = 0; j < lb; j++)
			{
				num1[j] += num2[j];
				if (num1[j] >= 10)
				{
					num1[j] -= 10;
					num1[j + 1]++;
				}
			}
		}
		while (num1[max] == 0 && max >= 1)
			max--;
		if (num1[max])
			printf("%d", num1[max]);
		for (j = max - 1; j >= 0; j--)
			printf("%d", num1[j]);
		printf("\n");
		if (i < t)
			printf("\n");
	}
	return 0;
}
