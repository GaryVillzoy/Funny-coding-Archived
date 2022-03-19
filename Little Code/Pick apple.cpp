#include<iostream>
using namespace std;
int main()
{
	int n, s, a, b, ab[5000], x, y, j, i, ans = 0;
	cin >> n >> s;
	cin >> a >> b;
	a += b;
	for (i = 1; i <= n; i++)
	{
		cin >> x >> y;
		if (a < x)
			continue;
		for (j = s - y; j >= 0; j--)
			if (ab[j] != 0 || j == 0)
				if (ab[j + y] <= ab[j])
					ab[j + y] = ab[j] + 1;
	}
	for (i = 0; i <= s; i++)
		if (ab[i] > ans)
			ans = ab[i];
	cout << ans << endl;
	return 0;
}

