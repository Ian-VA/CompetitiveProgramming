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
        int n; std::cin >> n;
        int a[n], b[n];
        bool ok = true;

        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            std::cin >> b[i];
        }

        for (int i = 0; i < n-1; i++) {
            if (a[i] > a[n-1] || b[i] > b[n-1]) {
                int swap = a[i];
                a[i] = b[i];
                b[i] = swap;

                if (a[i] > a[n-1] || b[i] > b[n-1]) {
                    ok = false;
                    break;
                }
            }

        }

        if (!ok) {std::cout << "No" << "\n";} else {std::cout << "Yes" << "\n";}

        
    }
}
