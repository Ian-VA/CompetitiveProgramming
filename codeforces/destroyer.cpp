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

using i32 = int32_t;
using ll = long long;
using point = std::pair<i32, i32>;


void solve() {
    int n; std::cin >> n;
    int arr[n];
    int bad = false;

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::sort(arr, arr + n);

    if (arr[0] != 0) {
        std::cout << "NO" << "\n";
    } else {
        int count[201] = {0};
        count[0] = 1;

        for (int i = 1; i < n; i++) {
            if (std::abs(arr[i] - arr[i-1]) > 1) {
                bad = true;
                break;
            } else {
                count[arr[i]]++;
            }
        }

        for (int i = 1; i < 201; i++) {
            if (count[i] > count[i-1]) {
                bad = true;
                break;
            } 
        }

        if (bad) {std::cout << "NO" << "\n";}
        else {std::cout << "YES" << "\n";}
    }
}

int main(){
    int t; std::cin >> t;

    while (t--) {
        solve();
    }
}
