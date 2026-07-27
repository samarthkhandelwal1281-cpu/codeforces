#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long N, D;
    cin >> N >> D;
    long long p[N];
    for (int i = 0; i < N; i++)
        cin >> p[i];
 
    sort(p, p + N);
    long long teams = 0;
    long long size = N;
    for (int i = N - 1; i >= 0; i--)
    {
        if (p[i] * size > D)
        {
            for (int j = 1; j <= size; j++)
            {
                if (p[i] * j > D)
                {
                    teams++;
                    size -= j;
                    break;
                }
            }
        }
        else
        {
            break;
        }
    }
    cout << teams << endl;
    return 0;
}