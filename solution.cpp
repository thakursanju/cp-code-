#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// dfs computes, for each node x, the best beauty contribution from its subtree
// when x is assigned its left bound (dp[x][0]) or right bound (dp[x][1]).
static void dfs(
		int x,
		int p,
		const vector<pair<int, int>>& bounds,
		const vector<vector<int>>& adj,
		vector<array<long long, 2>>& dp) {
	for (int y : adj[x]) {
		if (y == p) continue; // avoid going back to parent
		dfs(y, x, bounds, adj, dp);

		// If x takes l_x, child y can choose l_y or r_y to maximize edge |l_x - a_y| + subtree(y)
		dp[x][0] += max(
			dp[y][0] + llabs(bounds[x].first - bounds[y].first),
			dp[y][1] + llabs(bounds[x].first - bounds[y].second)
		);

		// If x takes r_x, child y can choose l_y or r_y to maximize edge |r_x - a_y| + subtree(y)
		dp[x][1] += max(
			dp[y][0] + llabs(bounds[x].second - bounds[y].first),
			dp[y][1] + llabs(bounds[x].second - bounds[y].second)
		);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;

		vector<pair<int, int>> bounds(n); // bounds[v] = {l_v, r_v}
		for (auto& pr : bounds) cin >> pr.first >> pr.second;

		vector<vector<int>> adj(n);
		for (int i = 0; i < n - 1; ++i) {
			int u, w;
			cin >> u >> w;
			--u, --w; // convert to 0-based indices
			adj[u].push_back(w);
			adj[w].push_back(u);
		}

		vector<array<long long, 2>> dp(n, {0, 0}); // dp[v][0/1] as defined above

		dfs(0, -1, bounds, adj, dp); // root the tree at 0

		cout << max(dp[0][0], dp[0][1]) << '\n'; // best overall if root takes l_0 or r_0
	}

	return 0;
}