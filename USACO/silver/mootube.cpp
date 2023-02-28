#include <iostream>
#include <algorithm>
#include <numeric>
#include <utility>
#include <vector>
#include <fstream>

typedef long long ll;
#define max_n 5000

std::vector<std::vector<std::pair<int, int>>> adj_list(max_n);
int count = 0;
std::vector<bool> visited;

void dfs(int v, int k) {
    if (visited[v])
        return;

    visited[v] = true;

    for (auto &n : adj_list[v]) {
        if (!visited[n.first] && k <= n.second) {
            count++;
            dfs(n.first, k);
        }
    }
}

int main()
{
    std::ofstream fout("mootube.out");
    std::ifstream fin("mootube.in");

    int n, q; fin >> n >> q;
    
    for (int i = 0; i < n-1; i++) {
        int a, b, w; fin >> a >> b >> w;
        a--; b--; 

        adj_list[a].push_back({b, w});
        adj_list[b].push_back({a, w});
    }

    for (int i = 0; i < q; i++) {
        int k, v; fin >> k >> v;
        count = 0;
        v--;
        visited = std::vector<bool>(n);

        dfs(v, k);
        fout << count << "\n";
    }
}
