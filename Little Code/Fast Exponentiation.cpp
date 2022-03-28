//1. a^b
int pow(int a, int b) {
	int ans = 1, base = a;
	while (b != 0) {
		if (b & 1 != 0)
			ans *= base;
		base *= base;
		b >>= 1;
	}
	return ans;
}

//2.A^B Mod C
#include<iostream>
using namespace std;
int main()
{
	long long a, b, c;
	long long aes = 1;
	cin >> a >> b >> c;
	while (b != 0) {
		if (b % 2 == 1)
			aes = ((aes % c) * (a % c)) % c;
		a = ((a % c) * (a % c)) % c;
		b /= 2;
	}
	cout << aes << endl;
	return 0;
}

//Montgomery Algorithm
int get_mod(int a, int b, int c)
{
	long long res = 1;
	int temp = a;
	while (b > 0)
	{
		if (b & 1)//取幂指数二进制最后一位
		{
			res = (res * temp) % c;
		}
		temp = (temp * temp) % c;
		b >>= 1;
	}
	return static_cast<int> (res);
}


