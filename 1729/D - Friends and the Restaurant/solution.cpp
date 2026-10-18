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
        vector<long long> x(n), y(n);
        for (int i = 0; i < n; i++)
            cin >> x[i];
        for (int i = 0; i < n; i++)
            cin >> y[i];
 
        vector<long long> diff(n);
        for (int i = 0; i < n; i++)
            diff[i] = y[i] - x[i];
 
        int days = 0, left = 0, right = n - 1;
        sort(diff.begin(), diff.end());
 
        while (left < right)
        {
            if (diff[left] + diff[right] >= 0)
            {
                left++;
                right--;
                days++;
            }
            else
                left++;
        }
 
        cout << days << endl;
    }
    return 0;
}