#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int N = 20005;

vector<int> adjList[N];
int visited[N];

int bfs(int source) {
    vector<int> level(N);
    int evenCount = 0, oddCount = 0;

    queue<int> q;
    q.push(source);
    visited[source] = 1;
    level[source] = 1;
    oddCount++;

    while (!q.empty()) {
        int curVertex = q.front();
        q.pop();

        for (int child : adjList[curVertex]) {
            if (level[child] != 0) continue;

            q.push(child);
            level[child] = level[curVertex] + 1;
            visited[child] = 1;

            if (level[child] % 2) {
                oddCount++;
            } else {
                evenCount++;
            }
        }
    }
    return max(oddCount, evenCount);
}

int32_t main() {
    int t, caseNumber = 0;
    cin >> t;

    while (t--) {
        int totalPairs = 0, numberOfVertices;
        cin >> numberOfVertices;

        for (int i = 0; i < N; i++)
            adjList[i].clear();
        memset(visited, 0, sizeof(visited));

        for (int i = 0; i < numberOfVertices; i++) {
            int x, y;
            cin >> x >> y;
            adjList[x].push_back(y);
            adjList[y].push_back(x);
        }

        for (int vertex = 0; vertex < N; vertex++) {
            if (visited[vertex] == 0 && adjList[vertex].size() != 0) {
                totalPairs += bfs(vertex);
            }
        }

        cout << "Case " << ++caseNumber << ": " << totalPairs << endl;
    }

    return 0;
}
