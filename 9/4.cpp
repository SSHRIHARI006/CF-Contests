#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;

        vector<vector<int>> g(n+1);
        for(int i = 0, u, v; i < n - 1; i++) {
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector<int> depth(n+1, -1), child(n+1, 0), count;
        queue<int> q;

        depth[1] = 0;
        q.push(1);
        count.push_back(0);

        while(!q.empty()) {
            int v = q.front();
            q.pop();
            int d = depth[v];

            if(count.size() <= (size_t)d)
                count.resize(d+1, 0);

            count[d]++;

            for(int x : g[v]) {
                if(depth[x] == -1) {
                    depth[x] = d + 1;
                    child[v]++;
                    q.push(x);
                }
            }
        }

        int maxds = 0;
        for(int x : count) maxds = max(maxds, x);

        int maxc = 0;
        for(int i = 1; i <= n; i++) maxc = max(maxc, child[i]);

        cout << max(maxds, maxc + 1) << "\n";
    }

    return 0;
}
