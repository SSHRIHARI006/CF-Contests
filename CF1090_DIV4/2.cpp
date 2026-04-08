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
        vector<int>A(7);
        for(int i=0;i<7;i++)cin>>A[i];
        sort(A.begin(),A.end());
        int ans = 0;
        for(auto a : A)ans -= a;
        ans += 2*A[6];
        cout << ans << "\n";
    }
    return 0;
}
