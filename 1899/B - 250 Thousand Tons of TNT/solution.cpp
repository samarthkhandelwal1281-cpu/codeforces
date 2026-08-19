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
 
        long long maxi = 0;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                vector<long long> sum;
                for (int j = 0; j < n; j += i)
                {
                    long long x = accumulate(a.begin() + j, a.begin() + j + i, 0LL);
                    sum.push_back(x);
                }
                long long mmax = *max_element(sum.begin(), sum.end());
                long long mmin = *min_element(sum.begin(), sum.end());
 
                maxi = max(maxi, (mmax - mmin));
            }
        }
        cout << maxi << endl;
    }
 
    return 0;
}