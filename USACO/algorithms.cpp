#include <cmath>
#include <iostream>
#include <vector>
#include <queue>

int n = 6;
std::vector<std::vector<int>> adj(n);
std::vector<bool> visited(n)

void dfs(int curr_node) {
    if (visited[curr_node]) {
        return;
    }

    visited[curr_node] = true

    for (auto &i : adj[curr_node]) {
        dfs(i);
    }
}

void bfs() {
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            std::queue<int> q;
            q.push(i);

            while (!q.empty()) {
                int current_node = q.front();
                q.pop();

                visited[current_node] = true;

                for (int neighbor : adj[current_node]) {
                    if (!visited[neighbor]) {q.push(neighbor);}
                }
            }
        }
    }
}
