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
        string s;
        cin >> s;
 
        vector<long long> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + (s[i] == 'W');
        }
 
        long long mini = LLONG_MAX;
        for (int i = 0; i <= n - k; i++)
        {
            long long dif = prefix[i + k] - prefix[i];
            mini = min(mini, dif);
        }
        cout << mini << endl;
    }
 
    return 0;
}