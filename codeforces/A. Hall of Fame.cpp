#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
 
typedef long long ll;
typedef long int lint;

int solve()
{
    int n, l, r; std::cin >> n;
    std::string lamps; std::cin >> lamps;
    l = 0; r = 0;

    for (auto i : lamps) {
        if (i == 'L') {l++;}
        else {r++;}
    }


    if (l == n || r == n) {return -1;} else {
        if (lamps.find("RL") != std::string::npos) {return 0;} else {
            for (int i = 0; i < n; i++){
                if (lamps[i] == 'L' && lamps[i+1] == 'R') {
                    return i+1;
                }
            }

        }
    }
}

int main(){
    int test; std::cin >> test;

    while (test--)
    {
        std::cout << solve() << "\n";
    }
}

