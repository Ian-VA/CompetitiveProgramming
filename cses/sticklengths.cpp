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

typedef long long ll;
typedef int32_t i32;
typedef std::pair<int, int> point;

int main()
{
    ll n, med, ans = 0; std::cin >> n;
    ll arr[n];
    std::vector<point> occurences;

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i]; 
    }

    std::sort(arr, arr + n);

    med = arr[n/2];

    for (int i = 0; i < n; i++) {
        ans += std::abs(med - arr[i]);
    }

    std::cout << ans;
}
