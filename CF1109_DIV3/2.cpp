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
        vector<ll> nums(n);
        for(int i = 0; i < n; i++) cin >> nums[i];
        
        bool flag = true;
        ll carry = 0;
        
        for(int i = 0; i < n; i++) {
            if (nums[i] + carry >= i + 1) {
                carry += nums[i] - (i + 1);
            } else {
                flag = false;
                break;
            }
        }
        
        if (flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}