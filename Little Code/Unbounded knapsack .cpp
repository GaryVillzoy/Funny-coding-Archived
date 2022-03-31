#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int w[10000], v[10001], maxdp;
int dp[100001];
int main()
{
	int t, m;
	cin >> t >> m;
	for (int i = 1; i <= m; i++)
		cin >> w[i] >> v[i];
	for (int i = 1; i <= m; i++)
	{
		for (int j = w[i]; j <= t; j++)
		{
			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
			maxdp = max(maxdp, dp[j]);
		}
	}
	cout << maxdp << endl;
	return 0;
}
