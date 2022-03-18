#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[4][101], col[28][101];
	int count[27] = { 0 }, i, j, k, max = 0;
	for (i = 0; i < 4; i++)
		gets(a[i]);
	for (i = 0; i < 4; i++)
		for (j = 0; a[i][j] != '\0'; j++)
			for (k = 1; k <= 26; k++)
				if (a[i][j] - 64 == k)
					count[k]++;
	for (i = 1; i <= 26; i++)
		if (max < count[i])
			max = count[i];
	for (i = 1; i <= 26; i++)
		col[i][0] = char(i + 64);
	for (i = 1; i <= 26; i++)
	{
		for (j = 1; j <= max; j++)
		{
			if (j <= count[i])
				col[i][j] = '*';
			else
				col[i][j] = ' ';
		}
	}
	for (j = max; j >= 0; j--)
	{
		for (i = 1; i <= 26; i++)
		{
			if (i < 26)
				cout << col[i][j] << " ";
			else
				cout << col[i][j];
		}
		if (j > 0)
			cout << endl;
	}
	return 0;
}
