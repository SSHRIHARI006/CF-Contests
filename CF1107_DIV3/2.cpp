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
        int x;
        cin >> x;
 
        int y = 1;
 
        while(x > 0){
            y *= 10;
            x /= 10;
        }
 
        cout << y + 1 << '\n';
    }
    return 0;
}
