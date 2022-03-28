void sortDes(int a[], int size)    // Descending-sort
{
	int i, j, k, t;
	for (i = 0; i < size - 1; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (a[k] < a[j])
				k = j;
		}
		if (k != i)
		{
			t = a[i];
			a[i] = a[k];
			a[k] = t;
		}
	}
}

void sortAsc(int a[], int size)     // Ascending-sort 
{
	int i, j, k, t;
	for (i = 0; i < size - 1; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (a[k] > a[j])
				k = j;
		}
		if (k != i)
		{
			t = a[i];
			a[i] = a[k];
			a[k] = t;
		}
	}
}

void Qsort(int a[], int left, int right)   // Quick sort£¨basic£© 
{
	int i = left;
	int j = right;
	long long flag = a[left];
	if (left >= right)
		return;
	while (i != j)
	{
		while (i < j && a[j] >= flag)
			j--;
		if (i < j)
			a[i] = a[j];
		while (i < j && a[i] <= flag)
			i++;
		if (i < j)
			a[j] = a[i];
	}
	a[i] = flag;
	Qsort(a, left, i - 1);
	Qsort(a, i + 1, right);
}

void quicksort(int left, int right)   // Quick sort£¨modified£© 
{
	int i = left, j = right, t;
	int mid = a[(left + right) / 2];
	while (i <= j)
	{
		while (a[i] < mid)
			i++;
		while (a[j] > mid)
			j--;
		if (i <= j) {
			t = a[i];
			a[i] = a[j];
			a[j] = t;
			i++;
			j--;
		}
	}
	if (i < right)
		quicksort(i, right);
	if (left < j)
		quicksort(left, j);
}


void reverse(int a[], int n)			// reverse an arrya; combined with sort() => sort(a,a+n,greater<int>). 
{
	for (int i = 0, j = n - 1; i < j; i++, j--) {
		int t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
void remove(int a[], int n, int pos)		// remove certain element from an array
{
	for (int i = pos + 1; i < n; i++)
		a[i - 1] = a[i];
}

