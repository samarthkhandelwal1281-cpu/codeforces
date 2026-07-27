#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<pair<long long,long long>> a(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[i] = {x,i+1};
        }
        
        for(long long i=0;i<n;i++){
            a[i].first = a[i].first % k;
            if(a[i].first == 0)
                a[i].first = k;
        }
 
        sort(a.begin(), a.end(), [&](pair<long long, long long> a, pair<long long, long long> b ) {
            if(a.first != b.first)
                return a.first > b.first;
            return a.second < b.second;
        });
 
        for(auto it : a)
            cout<<it.second<<" ";
        cout<<endl;
    }
 
    return 0;
}