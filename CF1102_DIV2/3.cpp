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
    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];
    
    for (int s = 0; s < n; s++) {
        vector<int> w1(n), w2(n), w(n);
        for (int i = 1; i < n; i++) {
            w1[(s + i) % n] = max(w1[(s + i - 1) % n], h[(s + i - 1) % n]);
        }
        for (int i = 1; i < n; i++) {
            w2[(s + n - i) % n] = max(w2[(s + n - i + 1) % n], h[(s + n - i) % n]);
        }
        for (int i = 0; i < n; i++) {
            w[i] = min(w1[i], w2[i]);
        }
        cout << accumulate(w.begin(), w.end(), 0ll) << " ";
    }
    cout << "\n";       
    }
    return 0;
}
