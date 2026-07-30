#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
 
        vector<char> res(n, 'R');
 
        int rem = r / (b + 1);
        int extrared = r % (b + 1);
 
        for (int i = rem; i < n; i += (rem + 1))
        {
            if (extrared > 0)
            {
                extrared--;
                i++;
            }
            res[i] = 'B';
            b--;
            if (b <= 0)
                break;
        }
 
        for (auto it : res)
            cout << it;
 
        cout << endl;
    }
    return 0;
}