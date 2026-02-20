#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool has2025 = false, has2026 = false;

        for (int i = 0; i + 3 < n; i++) {
            if (s.substr(i, 4) == "2025") has2025 = true;
            if (s.substr(i, 4) == "2026") has2026 = true;
        }

        if (has2026 || !has2025) {
            cout << 0 << '\n';
            continue;
        }

        int best = 4;
        string target = "2026";

        for (int i = 0; i + 3 < n; i++) {
            int diff = 0;
            for (int j = 0; j < 4; j++) {
                if (s[i + j] != target[j]) diff++;
            }
            best = min(best, diff);
        }

        cout << min(1, best) << '\n';
    }
}
