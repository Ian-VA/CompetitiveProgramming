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

int main(){
    int t;  std::cin >> t;

    while (t--) {
       ll n, k; std::cin >> n >> k;

       if (std::log2(n) < k) {std::cout << n + 1 << "\n";}
       else {std::cout << (ll) std::pow(2, k) << "\n";}
    }
}

