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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        vector<long long> maxSetBit(31, 0);
 
        for (int i = 0; i < n; i++)
            for (int bit = 30; bit >= 0; bit--)
                if ((a[i] & (1 << bit)))
                {
                    maxSetBit[bit]++;
                    break;
                }
 
        long long cnt = 0;
 
        for (int i = 0; i < 31; i++)
            cnt += (maxSetBit[i] * (maxSetBit[i] - 1)) / 2;
 
        cout << cnt << endl;
    }
    return 0;
}