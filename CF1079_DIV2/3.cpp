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
        ll p, q;
    cin >> p >> q;

    if (q > p && 3LL * p >= 2LL * q)
        cout << "Bob\n";
    else
        cout << "Alice\n";
    
    }
    return 0;
}
