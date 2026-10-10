#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
 
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
 
        long long totalpot = 0;
        for (int j = 0; j < m; j++)
        {
            vector<long long> col(n);
            for (int i = 0; i < n; i++)
                col[i] = a[i][j];
 
            sort(col.begin(), col.end());
 
            for (int i = 0; i < n; i++)
            {
                // ye jo ,multiplier hai ye phele smaller values of n-1 ,n-2 till n/2 time minus krenge then largers values vo from n/2 times se plus krenge
                long long multiplier = (1LL * i) - (1LL * (n - 1 - i));
                totalpot += multiplier * col[i];
            }
        }
        cout << totalpot << endl;
    }
    return 0;
}