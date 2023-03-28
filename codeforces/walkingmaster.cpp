#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <numeric>
#include <cmath>
#include <set>
#include <queue>

typedef long long ll;

int main()
{
    int t; std::cin >> t;

    while (t--) {
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;

        if (b <= d && c <= a + d - b) {
            std::cout << (d - b) + (a + d - b - c) << "\n";
        } else {
            std::cout << "-1\n";
        }
    }
}
