#include <iostream>
#include <vector>
#include <string>

int main() {
    int n; std::cin >> n;
    std::pair<char, int> cows[n];
    int liars;
    
    for (int i = 0; i < n; i++) {
        std::pair<char, int> cow;
        char gl; int numberline; std::cin >> gl >> numberline;
        cow.first = gl; cow.second = numberline;
        cows[i]= cow;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            curr_cow = cows[i]; iterable_cow = cows[j];
            

        }
    }
    
    return 0;
