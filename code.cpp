#include <vector>
#include <iostream>

void dfs(int v,
         const std::vector<std::vector<int>>& adj,
         std::vector<bool>& visited) {
    visited[v] = true;
    std::cout << v << " ";
    for (int u : adj[v]) {
        if (!visited[u]) {
            dfs(u, adj, visited);
        }
    }
}
