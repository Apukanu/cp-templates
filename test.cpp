#include<bits/stdc++.h>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
// gp_hash_table<int, int> mp;
//Types are:-
#define          int          long long
#define          yes          cout<< "YES\n";
#define          yess         cout<< "Yes\n";
#define          no           cout<< "NO\n";
#define          noo          cout<< "No\n";
#define          vec          vector<int>
#define          all(a)       (a).begin(),(a).end()
#define          sz(a)        (int)(a.size())
#define          nl           cout<<"\n";
#define      lcm(a, b)        ((a)*((b)/__gcd(a,b)))
#define      pb               push_back
#define      eb               emplace_back
#define      lb(x)            lower_bound(v.begin(), v.end(), (x))-v.begin();
#define     newarray(a)         (a).resize(unique((a).begin(), (a).end())-(a).begin());
#define     Apu_Kanu          ios_base::sync_with_stdio(false); cin.tie(nullptr);
/*bool cmp(pair<int, int>a, pair<int, int>b) {
  if (a.first == b.first)return a.second < b.second;
  return a.first > b.first;
}
*/  //distance(v.begin(), lower_bound(v.begin(), v.end(), i)) + 1;
/* ----------------- Let's start thinking ----------------- */
int n;
// int dp[200009];
// int rec(int i, vec a)
// {
// 	if (i > n) return 1e18;
// 	if (i == n) return 1;
// 	if (dp[i] != -1) return dp[i];
// 	int k = rec(i + 1, a) + 1;
// 	int j = rec(i + a[i] + 1, a);
// 	dp[i] = min(k, j);
// 	return dp[i];
// }
int32_t main()
{
	Apu_Kanu

	int testcase = 1;
	cin >> testcase;
	while (testcase--)
	{

		cin >> n;
		vec a(n + 1);
		for (int i = 1; i <= n; ++i)
		{
			cin >> a[i];
		}
		vector<int>dp(n + 2, 0);
		// memset(dp, 0, sizeof dp);
		dp[n] = 1;
		// cout << rec(n - 1, a); nl
		for (int i = n - 1; i > 0; i--)
		{
			int j = dp[i + 1] + 1;
			if (i + a[i] <= n)
			{
				j = min(j, dp[i + a[i] + 1]);
			}
			dp[i] = j;
		}
		cout << dp[1]; nl



	}

	cout << '\n';
	cout << fixed << setprecision(10);
	cerr << "Time:" << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
	return EXIT_SUCCESS;
	return 0;
}
