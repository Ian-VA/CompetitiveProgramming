#include <iostream>
#include <algorithm>
#include <numeric>
#include <utility>
#include <vector>
#include <fstream>

typedef long long ll;


int main()
{
    ll n, t; std::cin >> n >> t;
    ll machines[n];

    for (ll i = 0; i < n; i++) {ll a; std::cin >> a; machines[i] = a;}

    ll hi = 1e18, lo = 0;
    ll ans = 0;

    while (lo <= hi) {
        ll runningproducts = 0;
        ll mid = (lo + hi) / 2;

        for (ll i = 0; i < n; i++) {
            runningproducts += (mid / machines[i]);

            if (runningproducts >= t) break;
        }

        if (runningproducts >= t) {hi = mid - 1; ans = mid;} else {
            lo = mid + 1;
        }
    }

    std::cout << ans;

}
