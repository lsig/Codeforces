// Core
#include <cmath>     // math functions
#include <cstdio>    // printf, scanf
#include <iomanip>   // setprecision, setw
#include <iostream>  // cin, cout, endl, etc
#include <sstream>   // stringstream, useful for string parsing
#include <string>    // string class

// Containers
#include <array>          // fixed-size array
#include <deque>          // double-ended queue
#include <map>            // ordered key-value pairs
#include <queue>          // queue and priority_queue
#include <set>            // ordered unique elements
#include <stack>          // LIFO stack
#include <unordered_map>  // hash table key-value pairs
#include <unordered_set>  // hash table unique elements
#include <vector>         // dynamic array

// Algorithms & Functions
#include <algorithm>   // sort, reverse, max, min, etc
#include <bitset>      // bitset class
#include <functional>  // function objects, useful for custom comparators
#include <numeric>     // accumulate, partial_sum
#include <tuple>       // tuple class
#include <utility>     // pair, make_pair
using namespace std;

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) {
	return os << '(' << p.first << ", " << p.second << ')';
}
template <typename T_container,
          typename T = enable_if_t<!is_same_v<T_container, string>,
                                   typename T_container::value_type>>
ostream &operator<<(ostream &os, const T_container &v) {
	os << '{';
	string sep;
	for (const T &x : v) { os << sep << x, sep = ", "; }
	return os << '}';
}
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
	cerr << ' ' << H;
	dbg_out(T...);
}

#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)(x).size())
#define all(a) (a).begin(), (a).end()

const double MAX_N = 1e5 + 5;
const ld MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
	int x = 0;
	cin >> x;
	dbg(x);

	cout << "Number: " << x << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int tc = 1;
	cin >> tc;
	for (int t = 1; t <= tc; t++) {
		cout << "Case #" << t << ": ";
		solve();
	}
}
