#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        vector<long long> res(n, 0);
        if (b * k > s || s > b * k + (k - 1) * n)
        {
            cout << -1 << endl;
        }
        else
        {
            res[0] = b * k;
            s -= b * k;
            int i = 0;
            while (i < n && s > 0)
            {
                if (s > k - 1)
                {
                    res[i] += k - 1;
                    s -= k - 1;
                }
                else
                {
                    res[i] += s;
                    s = 0;
                }
                i++;
            }
            for (int i = 0; i < n; i++)
            {
                cout << res[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}