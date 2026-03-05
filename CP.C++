#include <bits/stdc++.h>
using namespace std;
int main() {
 int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        vector<int> g;
        for (int i = 0; i < n; ++i)
            if (s[i] == 'G') g.push_back(i);

        if (g.empty()) {
            cout << 0 << "\n";
            continue;
        }

        int locks = 1;
        int last = g[0];

        for (int i = 1; i < (int)g.size(); ++i) {
            if (g[i] - last >= k) {
                locks++;
                last = g[i];
            }
        }

        cout << locks << "\n";
    }
    return 0;
}
