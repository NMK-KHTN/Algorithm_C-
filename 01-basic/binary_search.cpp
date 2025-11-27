#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, target;
    cin >> n >> target;

    vector<int> a(n);
    for(int &x : a) cin >> x;

    int l = 0, r = n - 1, pos = -1;

    while(l <= r){
        int mid = (l + r) / 2;
        if(a[mid] == target){
            pos = mid;
            break;
        }
        if(a[mid] < target) l = mid + 1;
        else r = mid - 1;
    }

    cout << pos;

    return 0;
}
