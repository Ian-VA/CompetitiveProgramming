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
    std::ofstream fout("bcount.out");
    std::ifstream fin("bcount.in");

    int n, q; fin >> n >> q;

    std::vector<int> ph(n+1, 0), pg(n+1, 0), pj(n+1, 0);

    for (int i = 0; i < n; i++) {
        int t; fin >> t;

        t == 1 ? ph[i+1] = ph[i] + 1: ph[i+1] = ph[i];
        t == 2 ? pg[i+1] = pg[i] + 1: pg[i+1] = pg[i];
        t == 3 ? pj[i+1] = pj[i] + 1: pj[i+1] = pj[i];
    }

    for (auto &i : pg) {
        std::cout << i << "\n";
    }

    for (int i = 0; i < q; i++) {
        int r, l; fin >> l >> r;

        fout << ph[r] - ph[l-1] << " " << pg[r] - pg[l-1] << " " << pj[r] - pj[l-1] << "\n";
    }
}
