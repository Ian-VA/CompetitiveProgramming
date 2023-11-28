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
    int t; std::cin >> t;

    while (t--) {
        int n, k, cnt_b = 0, cnt_a = 0; std::cin >> n >> k;
        std::string a; std::cin >> a;

        int a_p[n+1];
        int b_p[n+1];

        for (int i = 0; i < n; i++) {
            a[i] == 'B' ? cnt_b++ : cnt_a++;
        }

        if (cnt_b == k) {std::cout << "0\n";}

        if (k == n) {
            if (cnt_b == n) {std::cout << "0\n";}
            else {
                std::cout << n << " B\n";
            }
        }

        if (k > cnt_b) {
            
        }
    }
}
