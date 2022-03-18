/* E.g. f(6)=f(1)+f(2)+f(3)+1  -->  f(n)=f(1)+f(2)+......f(trunc(n/2))+1£»*/

#include <iostream>
using namespace std;
int main() {
	int i, n, ans, sum[1001];
	sum[0] = 0, sum[1] = 1;
	cin >> n;
	for (i = 2; i <= n; i++) {
		ans = sum[i / 2] + 1;
		sum[i] = sum[i - 1] + ans;
	}
	cout << sum[n] - sum[n - 1] << endl;
	return 0;
}


/*
#include <iostream>
using namespace std;
int main()
{
	int a[1001], n, i, s;
	a[1] = 1;
	cin >> n;
	for (s = 2; s <= n; s++)
	{
		a[s] = 0;
		for (i = 1; i <= s / 2; i++)
		{
			a[s] += a[i];
		}
		a[s]++;
	}
	cout << a[n];
}
Also work!
*/
