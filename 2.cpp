#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        ## HLO
        
        ## hi staring to increase the  contribution 
        long long n, h, k;
        scanf("%lld %lld %lld", &n, &h, &k);
        vector<long long> a(n);
        for (int i = 0; i < n; i++) scanf("%lld", &a[i]);

        long long S = 0;
        for (int i = 0; i < n; i++) S += a[i];

        // prefix[i] = a[0] + ... + a[i]
        vector<long long> prefix(n);
        prefix[0] = a[0];
        for (int i = 1; i < n; i++) prefix[i] = prefix[i - 1] + a[i];

        // min_pre[i] = min(a[0..i])
        vector<long long> min_pre(n);
        min_pre[0] = a[0];
        for (int i = 1; i < n; i++) min_pre[i] = min(min_pre[i - 1], a[i]);

        // max_suf[i] = max(a[i..n-1])
        vector<long long> max_suf(n);
        max_suf[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--) max_suf[i] = max(max_suf[i + 1], a[i]);

        long long ans = LLONG_MAX;

        // Case 1: p = 0 (kill using only full magazines, no partial)
        // Need m full magazines where m*S >= h
        // Time = m*n + (m-1)*k  (no reload after last magazine)
        long long m0 = (h + S - 1) / S;
        long long time0 = m0 * n + (m0 - 1) * k;
        ans = min(ans, time0);

        // Case 2: p = 1..n (m full magazines + p bullets from next magazine)
        // Time = m*(n+k) + p
        for (int p = 1; p <= n; p++) {
            long long pre = prefix[p - 1];
            // Best swap: swap min(a[0..p-1]) with max(a[p..n-1])
            if (p < n) {
                long long delta = max_suf[p] - min_pre[p - 1];
                if (delta > 0) pre += delta;
            }

            if (pre >= h) {
                // No full magazines needed
                ans = min(ans, (long long)p);
            } else {
                long long remaining = h - pre;
                long long m = (remaining + S - 1) / S;
                long long time_p = m * (n + k) + p;
                ans = min(ans, time_p);
            }
        }

        printf("%lld\n", ans);
    }
    return 0;
}