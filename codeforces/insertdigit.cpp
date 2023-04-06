#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <numeric>
#include <cmath>
#include <set>
#include <queue>
#include <bitset>
#include <fstream>
#include <climits>

typedef long long ll;
typedef int32_t i32;
typedef std::pair<int, int> point;

int main()
{

    int t; std::cin >> t;

    while (t--) 
    {
        int n, d; std::cin >> n >> d;
        bool ok = false;
        std::string num; std::cin >> num;

        for (int i = 0; i < n; i++) {
            if (num[i] - '0' < d && d != 0) {
                num.insert(i, std::to_string(d));
                ok = true;
                break;
            }
        }

        if (!ok) {num.push_back(std::to_string(d)[0]);}

        std::cout << num << "\n";
    }
}
