#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
 
typedef long long int llint;
 
int main() {
    llint n; std::cin >> n;
    llint arr[n];

    for (llint i = 0; i < n-1; i++) {
        llint l; std::cin >> l; arr[i] = l;
    }

    std::sort(arr, arr + n);

    if (n - 1 == 1) {
        if (arr[0] > 1) {std::cout << arr[0] - 1;} else {std::cout << arr[0] + 1;}
    } else {
        for (llint i = 0; i < n - 1; i++) {
            if (arr[i + 1] - arr[i] > 1) {std::cout << arr[i] + 1; break;}
        }
    }

}
