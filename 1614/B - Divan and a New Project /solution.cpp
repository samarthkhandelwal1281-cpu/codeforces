#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // input
        int n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
            cin >> a[i];
 
        // proccessing
        vector<pair<long long, long long>> map;
        for (int i = 0; i < n; i++)
        {
            map.push_back({a[i], i});
        }
 
        sort(map.rbegin(), map.rend());
 
        // head coordinate is zero
        vector<long long> ans(n + 1, 0);
        ans[0] = 0;
 
        long long minutes = 0, coordinate = 1;
 
        for (int i = 0; i < n; i++)
        {
            ans[map[i].second + 1] = coordinate;
 
            minutes += (abs(coordinate) * map[i].first);
            if (coordinate < 0)
                coordinate = abs(coordinate) + 1;
            else
                coordinate = -coordinate;
        }
        cout << (2 * minutes) << endl;
        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}