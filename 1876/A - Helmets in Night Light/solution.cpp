#include<bits/stdc++.h>
using namespace std;
//what we did is we joined the two values can_be_shared a[i] an sharing price b[i]
// we have inital cost p nad already_shared as 1 considering the first case done
// then we sorted it and it the sharing cost go above the value of p then it will be completely covered by p cost 
// and if already_shared and can_be_shared is more than the n then we will just have cost as n - already_shared*sharing_cost
// then made already_shared as n;
// otherwise we can have cost as can_be_shared * sharing-cost and already += can_be_shared
//at last we just have the cost with the remaining values (n - already_shared) * p
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,p;
        cin>>n>>p;
        vector<long long> a(n);
        vector<long long> b(n);
        vector<pair<long long,long long>> v(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        for(int i=0;i<n;i++)
            v[i] = {b[i],a[i]};
 
        sort(v.begin(),v.end());        
        long long cost = p;
        long long alreay_shared = 1;
        for(auto it : v){
            long long can_be_shared = it.second;
            long long sharing_cost = it.first;
            if(sharing_cost >= p)
                break;
 
            if(alreay_shared + can_be_shared > n){
                cost += (n - alreay_shared)*sharing_cost;
                alreay_shared = n;
                break;
            }else{
                cost += can_be_shared*sharing_cost;
                alreay_shared += can_be_shared;
            }
        }
        cost += (n - alreay_shared)*p;
        
        cout<<cost<<endl;
    }
    return 0;
}