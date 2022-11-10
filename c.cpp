#include<bits/stdc++.h>
using namespace std;

#define ll long long

// C. Phase Shift

void solve() {
    int n;
    string t;
    cin >> n >> t;

    vector<int> edge(26, -1), redge(26, -1);

    auto get = [&](int c) {
        int len = 0;
        int curr = c;
        while(edge[curr] != -1) {
            len++; 
            curr = edge[curr];
        }
        return make_pair(curr, len);
    };

    vector<int> vec;
    for(auto c : t) {
        vec.push_back(c - 'a');
    }

    for(int i = 0; i < n; i++) {
        if(edge[vec[i]] == -1) {
            for(int c = 0; c < 26; c++) {
                if(redge[c] == -1) {
                    auto [clast, len] = get(c);
                    if(clast != vec[i] or len == 25) {
                        edge[vec[i]] = c;
                        redge[c] = vec[i];
                        break;
                    }
                }
            }
        }
        vec[i] = edge[vec[i]];
    }

    for(int i = 0; i < n; i++) {
        t[i] = vec[i] + 'a';
    }

    cout << t << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed << setprecision(20);

    int tc = 1;
    cin >> tc;
    while(tc--) {
        solve();
    }

    #ifdef DEBUG
		cerr << "Runtime is: " << clock() * 1.0 / CLOCKS_PER_SEC << '\n';
	#endif

    return 0;
} 
