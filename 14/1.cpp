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
        int n, s, x;
        cin >> n >> s >> x;
        vi A(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> A[i];
            sum += A[i];
        }

        int d = s - sum;
        if (d >= 0 && d % x == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
