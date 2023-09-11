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

using i32 = int32_t;
using ll = long long;
using point = std::pair<ll, ll>;

int main() {
	int bale_num; std::cin >> bale_num;
	int query_num; std::cin >> query_num;
    std::vector<int> bales(bale_num);

	for (int i = 0; i < bale_num; i++) { std::cin >> bales[i]; }

    std::sort(begin(bales), end(bales));

	for (int i = 0; i < query_num; i++) {
		int q_start;
		int q_end;
        std::cin >> q_start >> q_end;

	    std::cout << upper_bound(begin(bales), end(bales), q_end) -

		            lower_bound(begin(bales), end(bales), q_start)

		     << "\n";
	}
}
