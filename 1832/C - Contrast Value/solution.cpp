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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        if (a.size() == 1)
        {
            cout << "1
";
            continue;
        }
 
        vector<int> ans;
        ans.push_back(a[0]);
        ans.push_back(a[1]);
 
        for (int i = 2; i < n; i++)
        {
            int currsize = ans.size();
 
            int x = ans[currsize - 2] - ans[currsize - 1];
            int y = ans[currsize - 1] - a[i];
 
            if (x > 0)
            {
                if (y > 0)
                    ans[currsize - 1] = a[i];
                else if (y < 0)
                    ans.push_back(a[i]);
            }
            else
            {
                if (y < 0)
                    ans[currsize - 1] = a[i];
                else if (y > 0)
                    ans.push_back(a[i]);
            }
        }
        int finalsize = ans.size();
 
        if (ans[0] == ans[1])
            finalsize--;
 
        cout << finalsize << endl;
    }
    return 0;
}