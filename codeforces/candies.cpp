#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <numeric>
#include <cmath>
#include <set>
#include <queue>
#include <bitset>

typedef long long ll;

int main()
{
    int t; std::cin >> t;

    while (t--) {
        ll a; std::cin >> a;

        if (a % 2 == 0) std::cout << -1 << "\n";
        else {
            int flag;
            std::string binary = std::bitset<32>(a).to_string();

            for (int i = 0; i < 32; i++) {
                if (binary[i] == '1') {
                    flag = i;
                    break;
                }
            }

            int num = 31 - flag;
            std::cout << num << "\n";

            for (int i = flag; i < 31; i++) {
                std::cout << binary[i] - 47 << " ";
            }

            std::cout << "\n";
        }
    }
}
