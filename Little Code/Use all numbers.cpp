#include<iostream>
using namespace std;
int main()
{
	int i1, i2, i3, a, b, c, num, flag = 0;
	cin >> i1 >> i2 >> i3;
	for (num = 100; num <= 999; num++)
	{
		a = i1 * num;
		b = i2 * num;
		c = i3 * num;
		if ((a / 100 + a / 10 % 10 + a % 10 + b / 100 + b / 10 % 10 + b % 10 + c / 100 + c / 10 % 10 + c % 10 == 45) &&
			((a / 100) * (a / 10 % 10) * (a % 10) * (b / 100) * (b / 10 % 10) * (b % 10) * (c / 100) * (c / 10 % 10) * (c % 10) == 362880))
			cout << a << " " << b << " " << c << endl;
		flag = 1;
	}
	if (flag == 0)
		cout << "No!!!";
	return 0;
}
