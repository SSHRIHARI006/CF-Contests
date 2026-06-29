#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

bool duplicates(vector<int>&A){
    for(int i=1;i<A.size();i++){
        if(A[i]==A[i-1])return true;
    }
    return false;
}
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
        sort(A.begin(),A.end());
        if(duplicates(A))cout << -1 << endl;
        else{
        for(int i=n-1;i>=0;i--)cout << A[i] << " ";
        cout<<endl;}
    }
    return 0;
}
