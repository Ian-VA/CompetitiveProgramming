#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>


int main() {
    int n, m; std::cin >> n >> m;
    std::multiset<int> tickets;
    
    for (int i = 0; i < n; i++) {
        int a; std::cin >> a; tickets.insert(a);
    }
    
    for (int i = 0; i < m; i++) {
        int a; std::cin >> a;
        std::multiset<int>::iterator can = --tickets.upper_bound(a);
        
        if (can != tickets.end() && *can <= a) {
            tickets.erase(tickets.find(*can));
            std::cout << *can << "\n";
        } else {
            std::cout << -1 << "\n";
        }
    }
}
