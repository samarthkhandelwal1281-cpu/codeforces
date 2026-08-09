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
        vector<vector<int>> a(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
 
        int cntNeg = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] <= 0)
                {
                    cntNeg++;
                    a[i][j] = -a[i][j];
                }
            }
 
        int index = 0, jindex = 0;
 
        if (cntNeg % 2 != 0)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (a[i][j] < a[index][jindex])
                    {
                        index = i;
                        jindex = j;
                    }
                }
            }
 
            a[index][jindex] = -a[index][jindex];
        }
 
        int sum = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                sum += a[i][j];
 
        cout << sum << endl;
    }
    return 0;
}