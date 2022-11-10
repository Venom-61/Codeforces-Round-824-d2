#include<bits/stdc++.h>
using namespace std;

#define ll long long

// A. Working Week

void solve() {
    int n;
    cin >> n;
    int ans = (n - 3) / 3;
    cout << ans - 1 << "\n";
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
