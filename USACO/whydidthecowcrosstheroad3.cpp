#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

void setIO(std::string s) {
  std::ios_base::sync_with_stdio(0); std::cin.tie(0); 
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("cowqueue");
    int n; std::cin >> n;
    std::vector<std::pair<int, int>> cows;

    for (int i = 0; i < n; i++) {
        std::pair<int, int> cow;
        int time; std::cin >> time; cow.first = time;
        int q; std::cin >> q; cow.second = q; cows.push_back(cow);
    }

    std::sort(cows.begin(), cows.end());
    int time = 0;

    for (auto &i : cows) {
        if (i.first > time) {
            for (; time < i.first; time++) {}
        }

        time += i.second;
    }

    std::cout << time;
}
