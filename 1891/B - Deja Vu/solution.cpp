#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, q;
        cin >> n >> q;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> x(q);
        for (int i = 0; i < q; i++)
            cin >> x[i];
 
        long long prev = 31;
 
        for (int i = 0; i < q; i++)
        {
            if (x[i] >= prev)
                continue; // Skip if current x[i] is not less than 'prev'
 
            long long val = pow(2, x[i]);
 
            for (int j = 0; j < n; j++)
            { // Loop through each element of array 'a'
                if (a[j] % val == 0)
                {                      // Check if a[j] is divisible by 2^x[i]
                    a[j] += (val / 2); // Add (2^x[i] / 2) to a[j]
                }
            }
 
            prev = x[i]; // Update 'prev' to current x[i]
        }
 
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "
";
    }
 
    return 0;
}