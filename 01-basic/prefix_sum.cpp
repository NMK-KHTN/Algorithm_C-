/*
Prefix Sum
Time: O(n)
Query sum in O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin >> n;
    vector<int> a(n), pref(n+1, 0);

    for(int i = 0 ; i < n; i++){
        cin >> a[i];
        pref[i+1] = pref[i] + a[i];
    }

    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r; // 0-indexed
        cout << pref[r+1] - pref[l] << "\n";
    }

    return 0;
}
