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

typedef long long ll;
typedef std::pair<int, int> point;

int main()
{
    int n; std::cin >> n;
    std::set<point> arrival;
    ll max = 0;

    for (int i = 0; i < n; i++) {
        int a, b; std::cin >> a >> b;
        arrival.insert({a, 1});
        arrival.insert({b, -1});
    }

    ll curr_customers = 0;

    for (auto i : arrival) {
        curr_customers += i.second;
        max = std::max(max, curr_customers);
    }

    std::cout << max;

}
