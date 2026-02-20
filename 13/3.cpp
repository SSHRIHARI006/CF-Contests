#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<ll>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n % 2 == 0) {
            cout << n << " ";
            for (int i = 2; i <= n - 2; i += 2) {
                cout << i + 1 << " " << i << " ";
            }
            cout << 1;
        } else {
            cout << n - 1 << " ";
            for (int i = 2; i <= n - 3; i += 2) {
                cout << i + 1 << " " << i << " ";
            }
            cout << n << " " << 1;
        }
        cout << '\n';
    }

    return 0;
}
