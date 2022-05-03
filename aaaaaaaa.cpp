#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;

	while (T--)
	{
		int N;
		long long K;
		cin >> N >> K;

		long long ans{};
		for (int i = 0; i < N; ++i)
		{
			int A;
			cin >> A;
			ans += A;
			if (ans % K)
				++ans;
		}

		cout << (ans + K - 1) / K << endl;
	}

	return 0;
}
