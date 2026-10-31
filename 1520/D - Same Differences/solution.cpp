#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] -= i;
        }
 
        map<long long, long long> freq;
        for (int i = 0; i < n; i++)
            freq[v[i]]++;
 
        /// har ek har dusre ke sath pair up ho skta hai to hum nC2 krenge
        long long ans = 0;
        for (auto &[val, count] : freq)
            ans += ((count) * (count - 1)) / 2;
        cout << ans << "
";
    }
    return 0;
}