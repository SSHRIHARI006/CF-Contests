

    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
     
        int t;
        cin >> t;
     
        while (t--) {
            int n;
            cin >> n;
     
            vector<long long> e, o;
     
            long long sum = 0;
            long long neg = 0;
     
            for (int i = 0; i < n; i++) {
                long long x;
                cin >> x;
     
                sum += abs(x);
     
                if (x < 0) neg += abs(x);
     
                if (i % 2 == 0)
                    e.push_back(x);
                else
                    o.push_back(x);
            }
     
            sort(e.begin(), e.end());
            sort(o.begin(), o.end());
     
            long long ans = neg;
            long long pe = 0, po = 0;
     
            int k = min(e.size(), o.size());
     
            for (int i = 0; i < k; i++) {
                pe += e[i];
                po += o[i];
     
                ans = min(ans, neg + pe + po);
            }
     
            cout << sum - 2 * ans << '\n';
        }
     
        return 0;
    }