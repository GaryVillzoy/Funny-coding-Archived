#include<stdio.h>
int main()
{
	int T;
	long int a, b, c, d, e, f, m1, m2, x1, x2, n1, n2;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%ld %ld %ld\n%ld %ld %ld", &a, &b, &c, &d, &e, &f);
		m1 = a > b ? (a > c ? a : c) : (b > c ? b : c);
		n1 = a < b ? (a < c ? a : c) : (b < c ? b : c);
		if (a >= b && a <= c || a <= b && a >= c)
			x1 = a;
		if (b <= a && b >= c || b >= a && b <= c)
			x1 = b;
		if (c <= a && c >= b || c >= a && c <= b)
			x1 = c;
		m2 = d > e ? (d > f ? d : f) : (e > f ? e : f);
		n2 = d < e ? (d < f ? d : f) : (e < f ? e : f);
		if (d >= e && d <= f || d <= e && d >= f)
			x2 = d;
		if (e <= d && e >= f || e >= d && e <= f)
			x2 = e;
		if (f <= d && f >= e || f >= d && f <= e)
			x2 = f;
		if ((m1 >= m2 && x1 >= x2 && n1 >= n2) || (m1 <= m2 && x1 <= x2 && n1 <= n2))
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
