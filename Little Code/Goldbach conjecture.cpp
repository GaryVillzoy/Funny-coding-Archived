#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
bool prime[20001];
void make() 
{
	int i;
	long long j;
 	memset(prime, true, sizeof(prime));
	for(i = 4; i <= 20001; i += 2)
		prime[i] = false;
	for(i = 2; i <= 20001; i++)
	{
		if(prime)
		{
			for(j = i * i; j <= 20001; j += i)
				prime[j] = false;
		}
	}
}

int main()
{
	make();
	int n, i, j;
	cin >> n;
	for(i = 2; i <= n - 4; i++)
	{
		for(j = 2; j <= n - 4; j++)
		{
			int k = n - i - j;
			if(prime[i] && prime[j] && prime[k])
			{
				printf("%d %d %d\n", i, j, k);
				return 0;
			}
		}
	}
}
