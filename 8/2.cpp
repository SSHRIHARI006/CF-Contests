#include <bits/stdc++.h>
using namespace std;

int TRY(long long white, long long dark, bool startWhite) {
    long long need = 1;
    int layers = 0;
    bool isWhite = startWhite;

    while (true) {
        if (isWhite) {
            if (white < need) break;
            white -= need;
        } else {
            if (dark < need) break;
            dark -= need;
        }
        layers++;
        need *= 2;
        isWhite = !isWhite;
    }
    return layers;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        int ans = max(
            TRY(a, b, true),
            TRY(a, b, false)
        );

        cout << ans << '\n';
    }
}
