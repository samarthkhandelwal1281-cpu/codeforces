#include <bits/stdc++.h>
using namespace std;
bool minOrMax(int val, const set<int> &st)
{
    if ((*st.begin()) == val)
        return true;
 
    if ((*st.rbegin()) == val)
        return true;
 
    return false;
}
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
 
        set<int> st(a.begin(), a.end());
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (minOrMax(a[i], st))
            {
                st.erase(a[i]);
                i++;
                continue;
            }
            if (minOrMax(a[j], st))
            {
                st.erase(a[j]);
                j--;
                continue;
            }
            break;
        }
 
        if (i < j)
            cout << (i + 1) << " " << (j + 1) << "
";
        else
            cout << "-1
";
    }
    return 0;
}