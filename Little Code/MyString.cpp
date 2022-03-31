#include<iostream> 
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

int myfind();
int myrfind();
string mycopy();
bool isnum(string str);
string myadd();
int myinsert();
int myreset();

vector<string> strstr;

int main()
{
	int t;
	string n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		strstr.push_back(n);
	}
	while (1)
	{
		cin >> n;
		if (n == "over")
			break;
		if (n == "copy")
		{
			string s2 = mycopy();
			cout << s2 << endl;
		}
		else if (n == "add")
		{
			string s2 = myadd();
			cout << s2 << endl;
		}
		else if (n == "find")
		{
			int x = myfind();
			cout << x << endl;
		}
		else if (n == "rfind")
		{
			int x = myrfind();
			cout << x << endl;
		}
		else if (n == "insert")
		{
			int x = myinsert();
			cout << strstr[x - 1] << endl;
		}
		else if (n == "reset")
		{
			int x = myreset();
			cout << strstr[x - 1] << endl;
		}
	}
	return 0;
}

int myfind()
{
	string n;
	int a;
	cin >> n;
	cin >> a;
	if (strstr[a - 1].find(n) == string::npos)
		return strstr[a - 1].size();
	return strstr[a - 1].find(n);
}

int myrfind()
{
	string n;
	int a;
	cin >> n;
	cin >> a;
	if (strstr[a - 1].rfind(n) == string::npos)
		return strstr[a - 1].size();
	return strstr[a - 1].rfind(n);
}

string mycopy()
{
	int n, x, l;
	cin >> n >> x >> l;
	return strstr[n - 1].substr(x, l);
}

bool isnum(string str)
{
	if (str.size() > 5)
		return false;
	for (int i = 0; i < str.size(); i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return false;
	}
	return true;
}

string myadd()
{
	string x, y, str;
	int a = 0, b = 0;
	cin >> x;
	cin >> y;
	if (isnum(x) == 1 && isnum(y) == 1)
	{
		for (int i = 0; i < x.size(); i++)
			a = a * 10 + (x[i] - '0');
		for (int i = 0; i < y.size(); i++)
			b = b * 10 + (y[i] - '0');
		int c = a + b;
		stringstream ss;
		ss << c;
		ss >> str;
		return str;
	}
	return x + y;
}

int myinsert()
{
	string s;
	int n, x;
	cin >> s;
	cin >> n >> x;
	strstr[n - 1].insert(x, s);
	return n;
}

int myreset()
{
	string s;
	int n;
	cin >> s;
	cin >> n;
	strstr[n - 1].assign(s);
	return n;
}
