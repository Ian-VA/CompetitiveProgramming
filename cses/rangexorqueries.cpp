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
typedef std::pair<i32, i32> point;
const int MAX_N = 2e5;

int main()
{
    int n, q; std::cin >> n >> q;
    i32 val[MAX_N+1];
    i32 prefix[MAX_N+1];

    for (int i = 1; i <= n; ++i) {
        std::cin >> val[i];
    }

    prefix[1] = val[1];

    for (int i = 2; i <= n; i++) {
        prefix[i] = prefix[i-1] ^ val[i];
    }

    while (q--) {
        int a, b; std::cin >> a >> b;
        
        std::cout << (prefix[a-1] ^ prefix[b]) << "\n";
    }
}
