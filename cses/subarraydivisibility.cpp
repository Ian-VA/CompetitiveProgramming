#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <numeric>
#include <cmath>
#include <set>
#include <queue>
#include <bitset>
#include <fstream>
#include <climits>

using i32 = int32_t;
using ll = long long;
using point = std::pair<i32, i32>;


int main() {
	int n; std::cin >> n;

	std::vector<ll> m(n);

	ll psums = 0;
	m[psums] = 1;

	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		psums += a;
		m[(psums % n + n) % n]++;
	}

	ll ans = 0;

	for (ll x : m) {
		ans += x * (x-1) / 2;
	}

	std::cout << ans << std::endl;
}
