#include <bits/stdc++.h>
using namespace std;
long long watertobehold(long long h, vector<long long> &a)
{
    long long water = 0;
 
    for (long long i = 0; i < a.size(); i++)
    {
        if (a[i] <= h)
            water += (h - a[i]);
    }
    // cout << water << endl;
    return water;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        long long mini = *min_element(a.begin(), a.end());
        long long low = mini + 1, high = mini + x;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
 
            if (watertobehold(mid, a) > x)
                high = mid - 1;
            else
                low = mid + 1;
        }
        cout << high << endl;
        // for (long long h = (mini + 1); h <= (mini + x); h++)
        // {
        //     if (watertobehold(h, a) <= x)
        //     {
        //         ans = h;
        //     }
        //     else
        //         break;
        // }
 
        // cout << ans << endl;
    }
 
    return 0;
}