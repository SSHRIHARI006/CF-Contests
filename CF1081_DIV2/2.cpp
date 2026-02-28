#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

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

        vector<int> ones, zeros;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') ones.push_back(i + 1);
            else zeros.push_back(i + 1);
        }

        if (ones.size() % 2 == 0) {
            cout << ones.size() << "\n";
            if (!ones.empty()) {
                for (int x : ones) cout << x << " ";
                cout << "\n";
            }
        } 
        else if (zeros.size() % 2 == 1) {
            cout << zeros.size() << "\n";
            if (!zeros.empty()) {
                for (int x : zeros) cout << x << " ";
                cout << "\n";
            }
        } 
        else {
            cout << -1 << "\n";
        }
    }
    return 0;
}
