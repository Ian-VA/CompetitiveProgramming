#include <iostream>
#include <vector>
#include <string>

int main() {
    int n; std::cin >> n;
    std::pair<char, int> cows[n];
    int ans = 0;
    
    for (int i = 0; i < n; i++) {
        std::pair<char, int> cow;
        char gl; int numberline; std::cin >> gl >> numberline;
        cow.first = gl; cow.second = numberline;
        cows[i]= cow;
    }
    
    for (int i = 0; i < n; i++) {
        int liars = 0;
        for (int j = 0; j < n; j++) {
            std::pair<char, int>curr_cow = cows[i]; std::pair<char, int>iterable_cow = cows[j];
            
            if ((iterable_cow.first=='L'&&curr_cow.second>iterable_cow.second)||(iterable_cow.first=='G'&&curr_cow.second<iterable_cow.second)) liars++;
            ans = std::min(ans, liars);
        }
    }
    
    std::cout << liars;
}
