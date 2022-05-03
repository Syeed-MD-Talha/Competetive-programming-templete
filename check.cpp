#include <bits/stdc++.h>
using namespace std;
typedef int long long ll;

bool check(ll n)
{
	string s = to_string(n);
	int len = s.length();
	bool flag = true;
	for (int i = 0; i < len; i++)
	{
		if (s[i] == '0' || s[i] == '1' || s[i] == '4' || s[i] == '9')
		{
			flag = true;
		}
		else
		{
			flag = false;
			break;
		}
	}
	return flag;
}

int main()
{
	int t;
	cin >> t;
	vector<ll> v;
	ll num, i;
	for (i = 1; i <= 100000; i++)
	{
		num = i * i;
		if (check(num))
		{
			v.push_back(num);
		}
	}

	for(auto u:v)cout<<u<<endl;
	while (t--)
	{
		ll a, b;
		cin >> a >> b;
		int count = 0;
		for (auto j : v)
		{
			if (j >= a && j <= b)
			{
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}

