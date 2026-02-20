#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        set<int> elements;
        int count0 = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            elements.insert(a[i]);
            if (a[i] == 0) count0++;
        }

        int mex = 0;
        while (elements.count(mex)) mex++;

        if (mex == 0) {
            cout << "NO\n";
        } else if (mex == 1) {
            cout << (count0 == 1 ? "YES\n" : "NO\n");
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
