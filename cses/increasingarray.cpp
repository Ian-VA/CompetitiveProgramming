#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
 
typedef long long int llint;
 
int main() {
    llint n; std::cin >> n;
    llint arr[n];
    llint moves = 0;

    for (llint i = 0; i < n; i++) {llint a; std::cin >> a; arr[i] = a;}

    for (llint i = 1; i < n; i++) {
        if (arr[i-1] > arr[i]){
            moves += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }

    std::cout << moves;
    
}
