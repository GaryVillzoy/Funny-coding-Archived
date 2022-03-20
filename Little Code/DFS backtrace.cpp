#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;

int p[10];
int ans[10000][10];
int sum = 0;

void dfs(int n, int deep, int *pNow)
{
	int i, k;
	if(n < 10 - deep || n > 3 * (10 - deep))
		return;
	if(n == 0)
	{
		for(i = 0; i < 10; i++)
		{
			ans[sum][i] = p[i];
		}
		++sum;
		return;
	}
	for(k = 1; k <= 3; k++)
	{
		p[deep] = k;
		dfs(n - k, deep + 1, p);
	}
}

int main()
{
	int n, i, j;
	cin >> n;
	memset(p, 0, sizeof(p));
	memset(ans, 0, sizeof(ans)); 
	dfs(n, 0, p);
	cout << sum << endl;
	for(i = 0; i < sum; i++)
	{
		for(j = 0; j < 10; j++)
		{
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

