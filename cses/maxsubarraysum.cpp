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

using i32 = int32_t;
using ll = long long;
using point = std::pair<ll, ll>;

int main() {
    int n; std::cin >> n;
    std::vector<ll> p(n + 1);

    for (int i = 1; i <= n; i++) {
        ll x; std::cin >> x;
        p[i] = p[i - 1] + x;
    }

    ll max = p[1];
    ll min = p[0];

    for (int i = 1; i <= n; i++) {
        max = std::max(max, p[i] - min);
        min = std::min(min, p[i]);
    }

    std::cout << max;
}
