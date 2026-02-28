#include <bits/stdc++.h>
using namespace std;

string X;
int n;

unordered_map<long long, bool> dp;

bool solve(int l, int r) {
    int i = l + (n - 1 - r);
    if (i == n) return true;

    long long key = ((long long)l << 32) | r;
    if (dp.count(key)) return dp[key];

    char left_char = (l % 2 == 0 ? 'a' : 'b');
    char right_char = (r % 2 == 0 ? 'a' : 'b');

    bool ok = false;

    if (X[i] == '?' || X[i] == left_char) {
        ok |= solve(l + 1, r);
    }

    if (!ok && (X[i] == '?' || X[i] == right_char)) {
        ok |= solve(l, r - 1);
    }

    return dp[key] = ok;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> X;

        dp.clear();

        cout << (solve(0, n-1) ? "YES\n" : "NO\n");
    }
}