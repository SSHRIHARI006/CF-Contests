#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (is_sorted(s.begin(), s.end())) {
        cout << "Bob\n";
        return;
    }

    int z = 0;
    for (char c : s) if (c == '0') z++;

    vector<int> idx;
    for (int i = 0; i < z; i++) {
        if (s[i] == '1') idx.push_back(i + 1);
    }
    for (int i = z; i < n; i++) {
        if (s[i] == '0') idx.push_back(i + 1);
    }

    cout << "Alice\n";
    cout << idx.size() << "\n";
    for (int i = 0; i < idx.size(); i++) {
        cout << idx[i] << (i == idx.size() - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}