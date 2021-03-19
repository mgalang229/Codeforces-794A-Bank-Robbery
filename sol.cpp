#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long oleg, left_guard, right_guard, number_of_banknotes;
	cin >> oleg >> left_guard >> right_guard >> number_of_banknotes;
	vector<long long> banknotes(number_of_banknotes);
	for (int i = 0; i < number_of_banknotes; i++) {
		cin >> banknotes[i];
	}
	// sort the array in non-decreasing order
	sort(banknotes.begin(), banknotes.end());
	int cnt = 0;
	for (int i = 0; i < number_of_banknotes; i++) {
		// check if the current safe is within the range of the left and right guards (exclusive)
		if (banknotes[i] > left_guard && banknotes[i] < right_guard) {
			// also, check if olef is within the range of the left and right guards (exclusive)
			if (oleg > left_guard && oleg < right_guard) {
				// if yes, then increment the counter
				cnt++;
			}
		}
	}
	cout << cnt << '\n';
	return 0;
}
