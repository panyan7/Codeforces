#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<long long,long long>

ll tt = 1, n, m, k;

// check long long
void solve() {
    ll x;
    cin >> n >> x;
    vector<ll> a(n);
    for (auto& x : a)
        cin >> x;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            cout << "1\n";
            return;
        }
    }
    cout << max(2LL, (x+a[n-1]-1)/a[n-1]) << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
