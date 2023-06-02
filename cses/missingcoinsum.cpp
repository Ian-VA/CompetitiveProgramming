#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

int main() {
    int n; std::cin >> n;
    int curr_sum = 0;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    std::sort(arr, arr + n);
    
    for (int i = 0; i < n; i++) {
        if (curr_sum + 1 < arr[i]) {
            break;
        }
        
        curr_sum += arr[i];
    }
    
    std::cout << curr_sum + 1;
}
