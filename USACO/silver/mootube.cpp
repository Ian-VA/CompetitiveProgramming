#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

typedef long long ll;

std::vector<std::vector<std::pair<int, int>>> adj_list;

void dfs(int v, int k, std::vector<bool> visited, int count) {

    if (visited[v]) 
        return;

    visited[v] = true;

    for (auto &n : adj_list[v]) {
        if (n.second >= k) {count++;}
        dfs(n.first, k, visited, count);
    }
}

int main()
{
    int n, q; std::cin >> n >> q;
    
    for (int i = 0; i < n-1; i++) {
        int a, b, w; std::cin >> a >> b >> w;

        adj_list[--a].push_back(std::make_pair(--b, w));
        adj_list[--b].push_back(std::make_pair(--a, w));
    }

    for (int i = 0; i < q; i++) {
        std::vector<bool> visited(n);
        int k, v; std::cin >> k >> v;
        int count = 0;

        dfs(--v, k, visited, count);
    }
}
