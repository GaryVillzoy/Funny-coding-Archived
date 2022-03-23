#include<stdio.h>
int main()
{
	int a[10001][4], i, n, x, y, sum = -2;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3]);
	}
	scanf("%d %d", &x, &y);
	for (i = 0; i < n; i++)
	{
		if (x >= a[i][0] && x <= a[i][2] + a[i][0] && y >= a[i][1] && y <= a[i][3] + a[i][1])
		{
			sum = i;
		}
	}
	printf("%d\n", ++sum);
	return 0;
}
