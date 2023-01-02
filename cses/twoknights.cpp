#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
 
typedef long long int llint;
 
int main() {
    int k; std::cin >> k;

    for (int i = 1; i < k+1; i++) {
        llint sol = (i - 1)*(i+4)*(pow(i, 2) - 3*i + 4) / 2;
        std::cout << sol << "\n";
    }
}
