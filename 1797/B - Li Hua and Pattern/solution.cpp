#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
 
        long long a[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
 
        long long cnt = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (a[i][j] != a[n - i - 1][n - j - 1])
                    cnt++;
 
        cnt /= 2;
 
        if (cnt > k)
            cout << "NO
";
        else
        {
            long long temp = k - cnt;
            if (temp % 2 == 0)
                cout << "YES
";
            else
            {
                if (n % 2 == 0)
                    cout << "NO
";
                else
                    cout << "YES
";
            }
        }
    }
 
    return 0;
}