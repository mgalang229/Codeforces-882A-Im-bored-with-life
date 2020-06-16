#include <bits/stdc++.h>

using namespace std;

#define SQ(a) (a)*(a)
#define ll long long
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define vi vector<int>

void decode() {
	int a, b;
	cin >> a >> b;
	int ans = 1;
	for(int i = 1; i <= min(a, b); ++i) {
		ans *= i;
	}
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
