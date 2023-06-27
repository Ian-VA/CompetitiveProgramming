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
    int t; std::cin >> t;

    while (t--) {
        ll n, k, g; std::cin >> n >> k >> g;

        ll stolen = std::min((g-1) / 2 * n, k * g);
        ll rest = (k*g - stolen) % g;

        if (rest > 0) {
            stolen -= (g-1) / 2;
            ll last = ((g-1) / 2 + rest) % g;

            if (last * 2 < g) {
                stolen += last;
            } else {
                stolen -= g - last;
            }
        }

        std::cout << stolen << "\n";
    }
}
