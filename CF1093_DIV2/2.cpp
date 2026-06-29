#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        long long m;
        cin >> n >> m;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long longestSegment = 1;
        long long currentSegment = 1;

        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                currentSegment++;
                longestSegment = max(longestSegment, currentSegment);
            } else {
                currentSegment = 1;
            }
        }

        if (longestSegment >= m) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}
