#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#define int long long


signed main() {
    int n; std::cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        int a; std::cin >> a; arr[i] = a;
    }

    std::sort(arr, arr+n);
    int max_tuition = 0;
    int max_earnings = 0;
    for (int i = 0; i < n; i++) {
        int tuition = arr[i];
        int earnings = (n - i) * tuition;

        if (earnings > max_earnings) {
            max_earnings = earnings;
            max_tuition = tuition;
        }
    }

    std::cout << max_earnings << " " << max_tuition;
}
