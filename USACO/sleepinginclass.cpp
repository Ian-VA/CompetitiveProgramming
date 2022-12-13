#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	int sum_a = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum_a += a[i];
	}
	for (int r = n; r >= 1; r--) {
		if (sum_a % r == 0) {
			int targetSum = sum_a / r;
			int curSum = 0;			
			bool ok = true;
			for (int i = 0; i < n; i++) {
				curSum += a[i];
				if (curSum > targetSum) {
					ok = false;
					break;
				}
				if (curSum == targetSum) {
					curSum = 0;
				}
			}
			if (ok) {
				cout << n - r << endl;
				return;
			}
		}
	}
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		solve();
	}
}
