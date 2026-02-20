#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        bool all1 = true;
        cin >> n;
        vector<int>A(n);
        for(int i=0;i<n;i++)cin>>A[i];
        if(A[0]==0 && A[n-1]==0 )cout << "Bob"<<endl;
        else cout <<"Alice"<<endl;
    }
    return 0;
}
