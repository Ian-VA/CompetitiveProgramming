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
using point = std::pair<ll, ll>;

int main() {
    int n; std::cin >> n;
    std::vector<point> arr;

    for (int i = 0; i < n; i++) {
        int a, d; std::cin >> a >> d;
        arr.push_back({a, d});
    }

    std::sort(arr.begin(), arr.end());
        
    ll curr = 0, reward = 0;
    for (int i = 0; i < n; i++) {
        curr += arr[i].first;
        reward += arr[i].second-curr;
    }

    std::cout << reward << "\n";
}
