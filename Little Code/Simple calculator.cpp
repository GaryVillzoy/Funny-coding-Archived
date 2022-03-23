#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	char c, id;
	int a = 0, b = 0, num = 0, op = 1, dir = 1;
	//ax + b = 0;
	while ((c = getchar()) != EOF)
	{
		if ('a' <= c && c <= 'z')
		{
			id = c;
			if (num == 0) num = 1;
			a += dir * op * num;
			num = 0;
		}
		else if ('0' <= c && c <= '9')
		{
			num = num * 10 + c - '0';
		}
		else
		{
			b += dir * op * num;
			op = 1;
			num = 0;
			if (c == '-')
				op = -1;
			if (c == '=')
				dir = -1;
		}
	}
	printf("%c=%.3f\n", id, -(float)b / a);
	return 0;
}

