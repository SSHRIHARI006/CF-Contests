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
        vector<int>A(n);
        for(int i=0;i<n;i++)cin>>A[i];
        cout << *max_element(A.begin(),A.end()) - *min_element(A.begin(),A.end()) + 1 << endl;
    }
    return 0;
}
