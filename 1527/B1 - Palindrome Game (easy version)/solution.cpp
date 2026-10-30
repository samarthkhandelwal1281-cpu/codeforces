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
        string s;
        cin >> s;
 
        int countzero = 0;
        for (int i = 0; i < n; i++)
            if (s[i] == '0')
                countzero++;
 
        if ((countzero % 2 == 0) || (countzero == 1))
            cout << "BOB
";
        else
            cout << "ALICE
";
    }
    return 0;
}