#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<ll>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>A(n);
        for(int i=0;i<n;i++)cin>>A[i];
        unordered_map<int,int>mp;
        for(int a:A)mp[a]++;
        
        for(int i=1;i<=n;i++){
            
        }

    }
    return 0;
}
