#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[25], c;
	int flag = 0, i, j, k, l, p, q;
	scanf("%s", s);
	l = strlen(s);
	for (i = 0; i < l; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			flag = 1;
			c = s[i];
			k = i;
			break;
		}
	}
	if (flag == 0)
	{
		while (s[l - 1] == '0' && l > 1)
			l--;
		for (i = 0; i < l; i++)
		{
			cout << s[l - i - 1];
		}
	}
	else if (flag == 1)
	{
		if (c == '.')
		{
			p = k - 1;
			while (s[p] == '0' && p > 0)
				p--;
			for (i = p; i >= 0; i--)
				printf("%c", s[i]);
			printf("%c", c);
			q = k + 1;
			while (s[q] == '0' && q < l - 1)
				q++;
			for (i = l - 1; i >= q; i--)
				printf("%c", s[i]);
		}
		else if (c == '/')
		{
			p = k - 1;
			while (s[p] == '0' && p > 0)
				p--;
			for (i = p; i >= 0; i--)
				printf("%c", s[i]);
			printf("%c", c);
			q = k + 1;
			while (s[l - 1] == '0')
				l--;
			for (i = l - 1; i >= q; i--)
				printf("%c", s[i]);
		}
		else if (c == '%')
		{
			p = k - 1;
			while (s[p] == '0' && p > 0)
				p--;
			for (i = p; i >= 0; i--)
				printf("%c", s[i]);
			printf("%c", c);
		}
	}
	return 0;
}
