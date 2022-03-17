#include<bits/stdc++.h>
using namespace std;
int main()
{
	char b[1000] = { '\0' }, a[1000000] = { '\0' }, c[1000] = { '\0' };
	bool f = true;
	int sum = 0, i, n = 0, l, l2, pos;
	cin.getline(b, 1000);
	cin.getline(a, 1000000);
	strlwr(b);
	strlwr(a);
	l = strlen(a);
	a[l] = ' ';
	a[l + 1] = '\0';
	for (i = 0; i <= l; i++)
	{
		if (a[i] != ' ')
		{
			c[n] = a[i];
			n++;
		}
		else
		{
			c[n] = '\0';
			if (strcmp(c, b) == 0)
			{
				sum++;
				if (f == true)
				{
					l2 = strlen(c);
					pos = i - l2;
					f = false;
				}
			}
			n = 0;
		}
	}
	if (sum == 0)
		cout << "-1" << endl;
	else
		cout << sum << " " << pos << endl;
	return 0;
}
