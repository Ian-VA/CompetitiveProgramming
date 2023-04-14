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

// binary exponentiation

typedef long long ll;
typedef int32_t i32;
typedef std::pair<i32, i32> point;
const int MAX_N = 2e5;
const ll MOD = 1e9 + 7;

ll binpow(ll a, ll b) {
    a %= MOD;

    ll res = 1;

    while (b > 0) {
        if (b & 1) 
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }

    return res;
}

int main()
{
   ll n; std::cin >> n;

   for (int i = 0; i < n; i++) {
        ll a, b; std::cin >> a >> b;

        std::cout << binpow(a, b) << "\n";
   }

}
