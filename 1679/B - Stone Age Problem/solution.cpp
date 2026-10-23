#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, q;
    cin >> n >> q;
 
    vector<pair<int, int>> a(n, {0, 0});
    for (int i = 0; i < n; i++)
        cin >> a[i].first;
 
    pair<int, int> globalVal = {0, -1};
 
    long long sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i].first;
    for (int j = 0; j < q; j++)
    {
        int t;
        cin >> t;
        long long x, y;
        if (t == 1)
        {
            cin >> x >> y;
            x--;
            if (a[x].second > globalVal.second)
                sum += (y - a[x].first);
            else
                sum += (y - globalVal.first);
 
            a[x].first = y;
            a[x].second = j;
        }
        else
        {
            cin >> x;
            sum = x * n;
            globalVal.first = x;
            globalVal.second = j;
        }
        cout << sum << endl;
    }
    return 0;
}
 
// #include <bits/stdc++.h>
// using namespace std;
 
// int main()
// {
// 	int n, q;
// 	cin >> n >> q;
 
// 	vector<pair<int, int>> v(n, {0, 0});
// 	for (int i = 0; i < n; i++)
// 		cin >> v[i].first;
// 	pair<int, int> globalVal = {0, -1};
 
// 	long long sum = 0;
// 	for (int i = 0; i < n; i++) //? O(n)
// 		sum += v[i].first;
 
// 	for (int it = 1; it <= q; it++)
// 	{
// 		int x;
// 		cin >> x;
 
// 		if (x == 1)
// 		{
// 			int ind, val;
// 			cin >> ind >> val;
// 			ind--;
// 			if (v[ind].second > globalVal.second)
// 				sum += (val - v[ind].first);
// 			else
// 				sum += (val - globalVal.first);
// 			v[ind].first = val;
// 			v[ind].second = it;
// 		}
// 		else
// 		{
// 			int val;
// 			cin >> val;
// 			globalVal.first = val;
// 			globalVal.second = it;
// 			sum = (long long)(val) * n;
// 		}
// 		cout << sum << "
";
// 	}
// 	return 0;
// }