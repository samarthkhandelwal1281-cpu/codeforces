#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> pre[3];
 
        for (int i = 0; i < 3; i++)
        {
            int s = 0;
            pre[i].push_back(s);
 
            for (int j = 0; j < n; j++)
            {
                int a;
                cin >> a;
 
                if ((s | a) != s)
                {
                    s |= a;
                    pre[i].push_back(s);
                }
            }
        }
 
        bool ans = false;
 
        // Check all combinations of OR results from the three stacks
        for (int A : pre[0])
        { // Iterate over precomputed OR results of stack 1
            for (int B : pre[1])
            { // Iterate over precomputed OR results of stack 2
                for (int C : pre[2])
                { // Iterate over precomputed OR results of stack 3
                    // Check if the combined OR result equals x
                    if ((A | B | C) == x)
                    {
                        ans = true;
                    }
                }
            }
        }
 
        cout << (ans ? "YES
" : "NO
");
    }
 
    return 0;
}