#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> arr(3);
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
 
        int rounds = 0;
        sort(arr.begin(), arr.end());
        do
        {
            if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2])
            {
                break;
            }
            rounds++;
            arr[0]++;
            arr[2]--;
            sort(arr.begin(), arr.end());
        } while (1);
 
        cout << rounds << endl;
    }
 
    return 0;
}