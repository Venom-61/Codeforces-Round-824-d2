#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

#define ll long long

// B. Tea with Tangerines

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int ans = 0;
    for(auto &x : a) {
        cin >> x;
        ans += (x - 1)  / (2 * a[0] - 1);
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}
