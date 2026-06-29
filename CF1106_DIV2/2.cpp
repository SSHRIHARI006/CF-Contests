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
        long long n;
        cin >> n;
        
        long long crimson_count = 0;
        
        for (long long b = 1; b <= n; ++b) {
            long long multiples = n / b;
            crimson_count += (multiples * multiples);
        }
        
        cout << crimson_count << "\n";
    }
    return 0;
}
