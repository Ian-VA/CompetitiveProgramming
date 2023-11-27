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

    for (int i = 0; i < t; i++) {
        int n; std::cin >> n;
        std::string a; std::cin >> a;

        int num_free = 0;
        int greatest_string = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == '.') {
                int local_string = 0;

                do {
                    num_free++;
                    local_string++;
                    i++;
                } while (a[i] == '.');

                greatest_string = std::max(local_string, greatest_string);
            }
        }

        greatest_string >= 3 ? std::cout << "2\n" : std::cout << num_free << "\n";
    }
}
