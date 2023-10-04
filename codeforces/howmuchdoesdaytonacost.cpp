#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>

using ll = long long;
using i32 = int32_t;
using point = std::pair<i32, i32>;

int main() {
    int t; std::cin >> t;

    while (t--) {
        int n, k; std::cin >> n >> k;
        bool found = false;

        for (int i = 0; i < n; i++) {
            int a; std::cin >> a;

            if (a == k) {
                found = true;
            }
        }

        found ? std::cout << "YES" << "\n" : std::cout << "NO" << "\n";
    }
}
