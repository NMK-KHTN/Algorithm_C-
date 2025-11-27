/*
Segment Tree - Range Sum Query
Time:
Build: O(n)
Query: O(log n)
Update: O(log n)
*/

#include <bits/stdc++.h>
using namespace std;

int n;
vector<long long> st;

void build(vector<int>& a, int id, int l, int r){
    if(l == r){
        st[id] = a[l];
        return;
    }
    int mid = (l + r) / 2;
    build(a, id*2, l, mid);
    build(a, id*2 + 1, mid + 1, r);
    st[id] = st[id*2] + st[id*2 + 1];
}

long long query(int id, int l, int r, int u, int v){
    if(v < l || r < u) return 0;
    if(u <= l && r <= v) return st[id];
    int mid = (l + r) / 2;
    return query(id*2, l, mid, u, v)
         + query(id*2 + 1, mid + 1, r, u, v);
}

void update(int id, int l, int r, int pos, int val){
    if(l == r){
        st[id] = val;
        return;
    }
    int mid = (l + r) / 2;
    if(pos <= mid) update(id*2, l, mid, pos, val);
    else update(id*2 + 1, mid + 1, r, pos, val);

    st[id] = st[id*2] + st[id*2 + 1];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    st.resize(4 * n);
    build(a, 1, 0, n-1);

    int q;
    cin >> q;

    while(q--){
        int type;
        cin >> type;

        if(type == 1){
            int l, r;
            cin >> l >> r;
            cout << query(1, 0, n-1, l, r) << "\n";
        }

        if(type == 2){
            int pos, val;
            cin >> pos >> val;
            update(1, 0, n-1, pos, val);
        }
    }

    return 0;
}
