#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; 
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int cnt = 0;
        for(int cows = 0; cows*4 <= n; cows++) {
            int rem = n - cows*4;
            if(rem % 2 == 0) cnt++;
        }
        cout << cnt << "\n";
    }
}
