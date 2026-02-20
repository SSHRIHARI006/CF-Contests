#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

int ds(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        
        int count = 0;
        for (long long y = x + 1; y <= x + 81; y++) {
            if (y - ds(y) == x) {
                count++;
            }
        }
        
        cout << count << endl;
    }
    return 0;
}
