#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef double K;
constexpr int INF = 0x3f3f3f3f;

#define FOR(i, b, e) for(int i = (b); i < (e); i++)
#define TRAV(x, a) for(auto &x: (a))
#define SZ(x) ((int)(x).size())
#define PB push_back
#define X first
#define Y second

void solve() {
	int n;
	cin >> n;
	vector<ii> vec(n);
	TRAV(x, vec) {
		char c;
		cin >> x.X >> c >> x.Y;
	}
	auto cmp = [](ii a, ii b) {
		return 1ll * a.X * b.Y < 1ll * a.Y * b.X;
	};
	auto sum = [](ii a, ii b) {
		return make_pair(a.X * b.Y + a.Y * b.X, a.Y * b.Y);
	};
	sort(vec.begin(), vec.end(), cmp);
	cout << (cmp(vec[n - 1], sum(vec[0], vec[1])) ? "TAK" : "NIE") << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	// int tt; cin >> tt;
	// FOR(te, 0, tt) {
	// 	// cout << "Case #" << te + 1 << ": ";
	// 	solve();
	// }
	solve();
	return 0;
}
