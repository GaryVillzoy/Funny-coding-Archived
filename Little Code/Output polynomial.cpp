#include<stdio.h>
#include<iostream>
using namespace std;
int  main()
{
	int n, xs, i;
	cin >> n;
	cin >> xs;
	if (xs > 1 || xs < -1)
		cout << xs;
	else if (xs == -1)
		cout << "-";
	if (xs != 0)
	{
		if (n == 1)
			cout << "x";
		else if (n != 0)
			cout << "x^" << n;
	}
	for (i = n - 1; i >= 1; i--)
	{
		cin >> xs;
		if (xs == 0)
			continue;
		if (xs > 0)
			cout << "+";
		if (xs == -1)
			cout << "-";
		else if (xs != 1)
			cout << xs;
		if (i == 1)
			cout << "x";
		else if (i != 0)
			cout << "x^" << i;
	}
	cin >> xs;
	if (xs > 0)
		cout << "+";
	if (xs != 0)
		cout << xs;
	cout << endl;
	return 0;
}
