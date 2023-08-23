#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>

using ll = long long;
using i32 = int32_t;
using point = std::pair<i32, i32>;
#define MAX_N 200000

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) // if last bit is 1 (odd number)
            res = res * a;
        a = a * a; // if last bit is even, we can square again
        b >>= 1; // right shift
    }

    return res;
}

int main() {
    std::cout << binpow(5, 20);
}
