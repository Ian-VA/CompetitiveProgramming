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
    std::vector<point> tasks;

    for (int i = 0; i < n; i++) {
        int a, b; std::cin >> a >> b;
        tasks.push_back({a, b});
    }

    std::sort(tasks.begin(), tasks.end());
    ll time = 0, reward = 0;

    for (auto &i : tasks) {
        time += i.first;
        reward += i.second - time;
    }

    std::cout << reward;
}

