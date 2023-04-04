#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

int main() {
    int n; std::cin >> n;
    int blocks[n];
    std::multiset<int> towers;
    
    for (int i = 0; i < n; i++) {
        std::cin >> blocks[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (i == 0) {towers.insert(blocks[0]);}
        else {
            if (*(towers.upper_bound(blocks[i])) > blocks[i]) {
                towers.erase(towers.upper_bound(blocks[i]));
                towers.insert(blocks[i]);
            } else {
                towers.insert(blocks[i]);
            }
        }
    }
    
    std::cout << towers.size();
}
