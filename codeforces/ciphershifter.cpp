#include <fstream>
#include <climits>

using i32 = int32_t;
using ll = long long;
using point = std::pair<i32, i32>;

int main() {
    int t; std::cin >> t;


    while (t--) {
        int n; std::cin >> n;
        std::string a; std::cin >> a;
        
        int i = 0;

        while (i < n) {
            int start = i;

            std::cout << a[i++];
            while (a[i++] != a[start]);
        }

        std::cout << std::endl;
    }
}
