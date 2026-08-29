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
        vector<long long> c(n);
        for (int i = 0; i < n; i++)
            cin >> c[i];
 
        int flag = 1;
        sort(c.begin(), c.end());
        if (c[0] != 1)
            flag = 0;
        else
        {
            long long sum = 1;
            for (int i = 1; i < n; i++)
            {
                if (c[i] > sum)
                {
                    flag = 0;
                    break;
                }
                sum += c[i];
            }
        }
 
        cout << (flag ? "YES
" : "NO
");
    }
 
    return 0;
}