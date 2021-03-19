#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	int n;
	cin >> n;
	int ans = 0;
	// in this problem, the position of Oleg is useless
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		// check if the current safe is within the range of
		// the left and right guards (exclusive)
		if (x > b && x < c) {
			ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}
