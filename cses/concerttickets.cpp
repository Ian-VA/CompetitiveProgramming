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

int main()
{
    int n, m; std::cin >> n >> m;
    std::multiset<int> tickets;
    int people[m];

    for (int i = 0; i < n; i++) {int a; std::cin >> a; tickets.insert(a);}
    for (int i = 0; i < m; i++) {std::cin >> people[i];}

    for (int i = 0; i < m; i++) {
        auto it = tickets.upper_bound(people[i]);

        if (it == tickets.begin()) {std::cout << "-1" << "\n";}
        else {
            std::cout << *(--it) << "\n";
            tickets.erase(it);
        }
    }
}
