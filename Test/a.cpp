#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T> using o_set1 = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using o_set2 = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define          intll         long long
#define          yes         cout<< "YES\n";
#define          no          cout<< "NO\n";
#define          vec         vector<int>
#define          all(a)     (a).begin(),(a).end()
#define          sz(a)       (int)(a.size())
#define          mapp         map<char,int>
#define          sett          set<int>
#define          nl          cout<<"\n";
#define      gcd(a, b)        __gcd(a, b)
#define      lcm(a, b)        ((a)*((b)/gcd(a,b)))
#define      pb               emplace_back
#define      Pop              pop_back
#define      Lb(x)             lower_bound(v.begin(), v.end(), (x))-v.begin();
#define     Faster             ios_base::sync_with_stdio(false); cin.tie(nullptr);
//a.resize(unique(a.begin(), a.end())-a.begin());
/* ------------------  Main logical function start from here    ------------------ */
const int N = 1e6 + 9;
int a[N];
o_set1 <int>r; o_set2<int> l;
int32_t main()
{
	Faster
	int tc = 1;
	// cin >> tc;
	while (tc--)
	{
		int n; cin >> n;
		intll ans = 0;
		for (int i = 1; i <= n; i++) {cin >> a[i]; r.insert(a[i]);}
		// for (auto i : r) cout << i << " "; nl
		for (int i = 1; i <= n; i++) {
			r.erase(a[i]);
			//cout << r.order_of_key(a[i]) << " " << l.order_of_key(a[i]); nl
			ans += (1LL * r.order_of_key(a[i])) * ( 1LL * l.order_of_key(a[i])) * 1ll;
			l.insert(a[i]);
		}
		cout << ans; nl

		/*pbds A; // declaration

		// Inserting elements - 1st query
		A.insert(1);
		A.insert(10);
		A.insert(2);
		A.insert(7);
		A.insert(2);  // ordered set only contains unique values

		// A contains
		cout << "A = ";
		for (auto i : A)
		cout << i << " ";
		cout << endl;
		cout << endl;

		// finding kth element - 4th query
		cout << "0th element: " << *A.find_by_order(0) << endl;
		cout << "1st element: " << *A.find_by_order(1) << endl;
		cout << "2nd element: " << *A.find_by_order(2) << endl;
		cout << "3rd element: " << *A.find_by_order(3) << endl;
		cout << endl;

		// finding number of elements smaller than X - 3rd query
		cout << "No. of elems smaller than 6: " << A.order_of_key(6) << endl; // 2
		cout << "No. of elems smaller than 11: " << A.order_of_key(11) << endl; // 4
		cout << "No. of elems smaller than 1: " << A.order_of_key(1) << endl; // 0
		cout << endl;

		// lower bound -> Lower Bound of X = first element >= X in the set
		cout << "Lower Bound of 6: " << *A.lower_bound(6) << endl;
		cout << "Lower Bound of 2: " << *A.lower_bound(2) << endl;
		cout << endl;

		// Upper bound -> Upper Bound of X = first element > X in the set
		cout << "Upper Bound of 6: " << *A.upper_bound(6) << endl;
		cout << "Upper Bound of 1: " << *A.upper_bound(1) << endl;
		cout << endl;

		// // Remove elements - 2nd query
		A.erase(1);
		A.erase(11); // element that is not present is not affected

		// A contains
		cout << "A = ";
		for (auto i : A)
		cout << i << " ";
		cout << endl;

		*/


	}

	return 0;
}
