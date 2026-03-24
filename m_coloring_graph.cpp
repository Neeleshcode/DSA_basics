#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isSafe(int node, int color[], bool graph[101][101], int n, int col) {
        for (int k = 0; k < n; k++) {
            if (k != node && graph[node][k] == 1 && color[k] == col) {
                return false;
            }
        }
        return true;
    }

    bool solve(int node, int color[], int m, int n, bool graph[101][101]) {
        if (node == n) {
            return true;
        }

        for (int col = 1; col <= m; col++) {
            if (isSafe(node, color, graph, n, col)) {
                color[node] = col;

                if (solve(node + 1, color, m, n, graph)) {
                    return true;
                }

                color[node] = 0;
            }
        }

        return false;
    }

    bool graphColoring(bool graph[101][101], int m, int n) {
        int color[101] = {0};
        return solve(0, color, m, n, graph);
    }
};

int main() {
    Solution obj;

    int n, m;
    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter number of colors: ";
    cin >> m;

    bool graph[101][101] = {0};

    int edges;
    cout << "Enter number of edges: ";
    cin >> edges;

    cout << "Enter edges (u v) using 0-based indexing:\n";
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    if (obj.graphColoring(graph, m, n)) {
        cout << "Coloring is possible\n";
    } else {
        cout << "Coloring is not possible\n";
    }

    return 0;
}