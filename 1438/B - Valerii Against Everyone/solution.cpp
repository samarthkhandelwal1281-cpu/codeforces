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
        vector<long long> b(n);
        for (int i = 0; i < n; i++)
            cin >> b[i];
 
        unordered_set<long long> st;
        for (int i = 0; i < n; i++)
            st.insert(b[i]);
 
        if (st.size() < n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
 
    return 0;
}