#include <iostream>
#include <vector>
#include <string>

int main() {
    int n, k; std::cin >> n >> k;
    std::string essay[n];
    
    for (int i = 0; i < n; i++) {
        std::string a; std::cin >> a; essay[i] = a;
    }
    
    for (int i = 0; i < n; i++) {
        int total_length = 0;
        std::cout << essay[i];
        total_length += essay[i].length();
        
        while (total_length + essay[i+1].length() <= k)
        {
            total_length += essay[i+1].length();
            std::cout << " " << essay[i+1];
            i++;
        }
        
        std::cout << "\n";
    }
}
