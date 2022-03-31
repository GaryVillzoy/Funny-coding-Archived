#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int v[30], w[30], dp[50000];  //v for values£¬w for weights
int n, m; // n for the total amount I have£¬m for the number fo items 
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		cin >> v[i] >> w[i];   
		w[i] *= v[i]; 	//w = weight * value 
	}
	// 0-1 knapsack
	for (int i = 1; i <= m; i++)
	{
		for (int j = n; j >= v[i]; j--) 
		{
			dp[j] = max(dp[j], dp[j - v[i]] + w[i]);	
		}
	}
	cout << dp[n] << endl;
	return 0;
}
