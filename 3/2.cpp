#include <bits/stdc++.h>
using namespace std;

int main() {


    int t;
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;

        long long count4 = 0;
        long long count8 = 0;

        for (char c : s) {
            if (c == '4') count4++;
            else count8++;
        }


        bool inside_square = (llabs(x) <= n && llabs(y) <= n);


        long long max_manhattan = count4 + (2 * count8);
        bool inside_diamond = ((llabs(x) + llabs(y)) <= max_manhattan);

        if (inside_square && inside_diamond) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}