#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
bool pd(char a, char b)
{
	if ((a == '(' && b == ')') || (a == '[' && b == ']'))
		return true;
	return false;
}
int main()
{
	int t, i, j, k, l;
	char a[101];
	int ans[110][110];
	cin >> t;
	while (t--)
	{
		memset(a, 0, sizeof(a));
		memset(ans, 0, sizeof(ans));
		scanf("%s", a);
		int len = strlen(a);
		for (i = 0; i < len; i++)
		{
			for (j = 0; j < len; j++)
			{
				if (i == j)
					ans[i][j] = 1;
				if (i < j)
					ans[i][j] = 1000;
			}
		}
		for (l = 1; l < len; l++)
		{
			for (i = 0; i < len - l; i++)
			{
				j = i + l;
				if (pd(a[i], a[j]))
					ans[i][j] = min(ans[i + 1][j - 1], ans[i][j]);
				for (k = i; k < j; k++)
					ans[i][j] = min(ans[i][k] + ans[k + 1][j], ans[i][j]);
			}
		}
		cout << ans[0][len - 1] << endl;
	}
	return 0;
}
