#include<bits/stdc++.h>
using namespace std;
bool t1[1001], t2[1001];
int min(int x, int y)
{
	return (x < y ? x : y);
}

int findmax(int a[])
{
	int p = 1;
	for (int i = 2; i <= 1000; i++)
	{
		if (a[p] < a[i])
			p = i;
	}
	return p;
}

int main()
{
	int m, n, k, l, d, x[1001], y[1001], i;
	memset(x, 0, sizeof(x));
	memset(y, 0, sizeof(y));
	scanf("%d %d %d %d %d", &m, &n, &k, &l, &d);
	int x1, y1, x2, y2;
	for (i = 1; i <= d; i++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		if (x1 == x2)
			y[min(y1, y2)]++;
		else
			x[min(x1, x2)]++;
	}
	for (i = 1; i <= k; i++)
	{
		int temp = findmax(x);
		t1[temp] = true;
		x[temp] = 0;
	}
	for (i = 1; i <= l; i++)
	{
		int temp = findmax(y);
		t2[temp] = true;
		y[temp] = 0;
	}
	for (i = 1; i <= 1000; i++)
	{
		if (t1[i])
			printf("%d ", i);
	}
	cout << endl;
	for (i = 1; i <= 1000; i++)
	{
		if (t2[i])
			printf("%d ", i);
	}
	return 0;
}
