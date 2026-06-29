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
        ll c;
        cin >> n >> c;
        vector<ll> A(n), B(n);
        ll sumA = 0, sumB = 0;
        
        for(int i = 0; i < n; i++) {
            cin >> A[i];
            sumA += A[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> B[i];
            sumB += B[i];
        }

        bool can_no_shuffle = true;
        for(int i = 0; i < n; i++) {
            if (A[i] < B[i]) {
                can_no_shuffle = false;
                break;
            }
        }
        
        ll cost_no_shuffle = can_no_shuffle ? (sumA - sumB) : -1;

        vector<ll> sortedA = A;
        vector<ll> sortedB = B;
        sort(all(sortedA));
        sort(all(sortedB));

        bool can_shuffle = true;
        for(int i = 0; i < n; i++) {
            if (sortedA[i] < sortedB[i]) {
                can_shuffle = false;
                break;
            }
        }
        
        ll cost_shuffle = can_shuffle ? (c + sumA - sumB) : -1;

        if (cost_no_shuffle != -1 && cost_shuffle != -1) {
            cout << min(cost_no_shuffle, cost_shuffle) << "\n";
        } else if (cost_no_shuffle != -1) {
            cout << cost_no_shuffle << "\n";
        } else if (cost_shuffle != -1) {
            cout << cost_shuffle << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}