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
        cin>>n;
        vector<int>p(n);
        for(int i=0;i<n;i++)cin>>p[i];
        
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (p[i] <= i + 1) count++;
        }
        cout << count << endl;
    }
    return 0;
}
