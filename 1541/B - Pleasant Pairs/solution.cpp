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
 
        vector<pair<long long, long long>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i + 1;
        }
 
        long long cnt = 0;
        sort(v.begin(), v.end());
 
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i].first * v[j].first >= 2 * n)
                    break;
                // ai.aj = i + j st i < j;
                if (v[i].first * v[j].first == v[i].second + v[j].second)
                    cnt++;
            }
        }
 
        cout << cnt << "
";
    }
    return 0;
}