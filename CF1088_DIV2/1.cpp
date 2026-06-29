#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>P(n);
        for(int i=0;i<n;i++){
            cin>>P[i];
        }

        if(n==1)cout << 1 << endl;
        else {for(int i=0;i<n;i++)cout << 2 << " ";cout << endl;}

    }
    return 0;
}
