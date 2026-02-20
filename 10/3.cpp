#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (n == k) {
            cout << 0 << "\n";
            continue;
        }
        if (n < k) {
            cout << -1 << "\n";
            continue;
        }

        queue<long long> q;
        q.push(n);
        int depth = 0;

        while (!q.empty()) {
            int sz = q.size();
            depth++;

            unordered_set<long long> nxt;

            while (sz--) {
                long long x = q.front();
                q.pop();

                long long a = x / 2;
                long long b = (x + 1) / 2;

                if (a == k || b == k) {
                    cout << depth << "\n";
                    goto next_case;
                }

                if (a > k) nxt.insert(a);
                if (b > k) nxt.insert(b);
            }

            if (nxt.empty()) {
                cout << -1 << "\n";
                goto next_case;
            }

            for (long long v : nxt) q.push(v);
        }

        cout << -1 << "\n";

        next_case:;
    }

    return 0;
}
