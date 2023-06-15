#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


int main() {
    int n; std::cin >> n;
    
    if (n % 5 == 0) {std::cout << n;} else {
        int down = n, up = n;
        
        while (down % 5 != 0 && up % 5 != 0) {
            if (--down % 5 == 0) {std::cout << down; break;}
            else if (++up % 5 == 0) {std::cout << up; break;}
        }
    }
}
