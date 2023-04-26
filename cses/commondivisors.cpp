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

typedef long long ll;
typedef int32_t i32;
typedef std::pair<i32, i32> point;

int main() {
	int n;
	std::cin >> n;

	for (int q = 0; q < n; q++) {
		int x;
		int div_num = 0;

		std::cin >> x;

		for (int i = 1; i * i <= x; i++) {
			if (x % i == 0) { div_num += i * i == x ? 1 : 2; }
		}

		std::cout << div_num << '\n';
	}
}
