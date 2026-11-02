#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n1, n2;
        cin >> n1 >> n2;
 
        string s1, s2;
        cin >> s1 >> s2;
 
        vector<int> mp1(26, 0), mp2(26, 0);
 
        for (char ch : s1) mp1[ch - 'a']++;
        for (char ch : s2) mp2[ch - 'a']++;
 
        int f = 1;
 
        for (int i = 0; i < 26; i++) {
            mp1[i] -= mp2[i];
 
            char ch = 'a' + i;
 
            if (ch == 's' || ch == 'i' || ch == 'x') {
                if (mp1[i] != 1) f = 0;
            }
            else {
                if (mp1[i] != 0) f = 0;
            }
        }
 
        if(f)cout << "YES"<<endl;
	    else cout << "NO"<<endl;
    }
 
    return 0;
}