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

typedef long long ll;

int main()
{
    std::ofstream fout("div7.out");
    std::ifstream fin("div7.in");

    int n; fin >> n;
    std::vector<int> first(7, -1);
    ll max = -99;
    first[0] = 0;

    int curr_prefix = 0;
    for (ll i = 0; i < n; i++) {
        int cow;
        fin >> cow;

        curr_prefix = (curr_prefix + cow) % 7;

        if (first[curr_prefix] == -1) {
            first[curr_prefix] = i;
        } else {
            max = std::max(max, i - first[curr_prefix]);
        }
    }

    fout << max;

}
