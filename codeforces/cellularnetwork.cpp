#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <numeric>
#include <cmath>
#include <set>
#include <queue>

// literally calculate max distance from tower to the left or right from a certain city

typedef long long ll;

int main()
{
    std::set<int> towers;
    ll n, m; std::cin >> n >> m;
    int cities[n];

    for (int i = 0; i < n; i++) {
        std::cin >> cities[i];
    }

    for (int i = 0; i < m; i++) {
        ll a; std::cin >> a; towers.insert(a);
    }

    int r = 0;

    for (int i = 0; i < n; i++) {
        int dist = 2e9 + 1;

        auto closest = towers.lower_bound(cities[i]);

        if (closest != towers.end()) {
            dist = *closest - cities[i];
        }

        if (closest != towers.begin()) {
            closest--;

            dist = std::min(dist, cities[i] - *closest);
        }

        r = std::max(r, dist);
    }

    std::cout << r;
}
