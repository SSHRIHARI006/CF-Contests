#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

bool possible(int x,int y){
    if(x==0 && y==0)return true;
    if(x<1 || y<1)return false;
    return (possible(x-2,y-1) || possible(x-3,y) || possible(x-4,y+1));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long val = x - 2*y;

        if (val < 0 || val % 3 != 0) {
            cout << "NO\n";
            continue;
        }

        long long k = val / 3;

        long long c_min = max(0LL, -y);
        long long c_max = k / 2;

        if (c_min <= c_max) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
