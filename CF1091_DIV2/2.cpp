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
        int n,k;
        cin>>n>>k;
        vector<int>A(n);
        for(int i=0;i<n;i++)cin>>A[i];
        cin>>k;
        k--;

        int target = A[k];

        int l = 0;
        for(int i=0;i<k;){
            if(A[i]!=target){l++;
            while(i<k && A[i]!=target)i++;
            }else i++;

        }

        int r = 0;
        for(int i=k+1;i<n;){
            if(A[i]!=target){r++;
            while(i<n && A[i]!=target)i++;
            }else i++;

        }

        cout << 2*max(l,r)<<endl;


    }
    return 0;
}
