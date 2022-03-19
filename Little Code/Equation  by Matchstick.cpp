#include<bits/stdc++.h>
using namespace std;
int n, ans = 0;
int s[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
int cal(int x)
{
	int sum = 0;
	if (x == 0)
		return 6;
	while (x > 0)
	{
		sum += s[x % 10];
		x /= 10;
	}
	return sum;
}
int main()
{
	int i, j, a, b;
	scanf("%d", &n);
	for (i = 0; i < 1000; i++)
	{
		for (j = 0; j < 1000; j++)
		{
			a = cal(i) + cal(j);
			b = cal(i + j);
			if (a + b + 4 == n)
				ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
