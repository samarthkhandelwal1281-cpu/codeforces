#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
 
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        sort(a.begin(), a.end());
        vector<long long> pre(n);
        pre[0] = a[0];
        for (int i = 1; i < n; i++)
            pre[i] = pre[i - 1] + a[i];
 
        long long ans = 0;
        for (int first = 0; first <= k; first++)
        {
            int second = k - first;
            int left = 2 * first;
            int right = n - second - 1;
            long long sum = pre[right] - (left == 0 ? 0 : pre[left - 1]);
            ans = max(ans, sum);
        }
 
        cout << ans << endl;
    }
 
    return 0;
}