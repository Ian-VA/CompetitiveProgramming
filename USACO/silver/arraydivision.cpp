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

bool is_possible(const std::vector<ll> &arr, const int k, ll max_sum) {
    int subcount = 0;
    ll cur_sum = 0;

    for (const int &x : arr) {
        if (x > max_sum) return false;

        if (cur_sum + x > max_sum) {
            subcount++;
            cur_sum = 0;
        }
        cur_sum += x;
    }
    if (cur_sum > 0) {subcount++;}

    return subcount <= k;
}

int main() {
    int n, k; std::cin >> n >> k;

    std::vector<ll> num;

    for (int i = 0; i < n; i++) {
        int a; std::cin >> a; num.push_back(a);
    }

    ll l = 1;
    ll r = 2e5 * 1e9;

    while (l < r) {
        ll mid = (l + r) / 2;

        if (is_possible(num, k, mid)) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }

    std::cout << l << "\n";
}
