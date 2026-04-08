#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> primes;

void sieve(int limit) {
    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= limit; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (ll j = 1LL * i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve(200000);  

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cout << 1LL * primes[i] * primes[i + 1] << " ";
        }
        cout << "\n";
    }

    return 0;
}