#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int count = 0;
    
   
    for (char c : s) {
        if (c == '1') count++;
    }
    
    
    int i = 0;
    while (i < n) {
        if (s[i] == '1') {
            i++;
            continue;
        }
        
      
        int j = i;
        while (j < n && s[j] == '0') {
            j++;
        }
        
        int gap = j - i;
        bool left = (i > 0);      
        bool right = (j < n);    
        
        if (left && right) {
            
            count += gap / 3;
        } else if (left|| right) {
           
            count += (gap + 1) / 3;
        } else {
           
            count += (gap + 2) / 3;
        }
        
        i = j;
    }
    
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}