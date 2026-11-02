#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        sort(a.begin(), a.end());
 
        long long t = a[n / 2];
 
        long long c = 0;
 
 
        for (auto x : a) {
            c += abs(x - t);
        }
        
        long long ops = a[n - 1] - a[0];
 
        cout << c<< " " << ops << '\n';
    }
 
    return 0;
}