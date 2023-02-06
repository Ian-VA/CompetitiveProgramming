#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <iterator>
#include <deque>
#include <fstream>

typedef long long ll;

int main()
{
    std::ifstream fin("planting.in");
    std::ofstream fout("planting.out");
    ll n; fin >> n;
    ll max_size = 0;
    std::vector<std::vector<int>> adj_list(n);

    for (int i = 0; i < n-1; i++) {
        ll a, b; fin >> a >> b;
        adj_list[a-1].push_back(b-1);
        adj_list[b-1].push_back(a-1);
    }

    for (auto i : adj_list) {
        max_size = std::max(max_size, (ll) i.size());
    }

    fout << (max_size + 1);
    
     
}
