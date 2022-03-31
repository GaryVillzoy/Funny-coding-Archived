#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int a[100], b[100], c[100], d[100], ans, n;
void queen(int i)
{
	if (i > n)
	{
		if (ans <= 2)
		{
			for (int k = 1; k <= n; k++)
			{
				cout << a[k] << " ";
			}
			cout << endl;
		}
		ans++;
		return;
	}
	else
	{
		for (int j = 1; j <= n; j++)
		{
			if ((b[j] == 0) && (c[i + j] == 0) && (d[i - j + n] == 0))
			{
				a[i] = j;
				b[j] = 1;
				c[i + j] = 1;
				d[i - j + n] = 1;
				queen(i + 1);
				b[j] = 0;
				c[i + j] = 0;
				d[i - j + n] = 0;
			}
		}
	}

}
int main()
{
	cin >> n;
	queen(1);
	cout << ans << endl;
	return 0;
}

