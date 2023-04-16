#include <iostream>
#include <algorithm>
#include <numeric>
#include <utility>
#include <vector>
#include <fstream>
#include <set>

typedef long long ll;
typedef std::pair<int, int> pair;


int main()
{
    int n; std::cin >> n;
    std::vector<int> playlist;
    std::set<int> buffer;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int a; std::cin >> a; playlist.push_back(a);
    }

    int r = -1;
    for (int i = 0; i < n; i++) {
        while (r < n-1 && !buffer.count(playlist[r+1])) buffer.insert(playlist[++r]);
        ans = std::max(ans, r-i+1);
        buffer.erase(playlist[i]);
    }
    std::cout << ans;
}
