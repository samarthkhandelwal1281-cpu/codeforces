#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
 
        long long sum = 0;
        for(int i=0;i<n;i++)
            sum += a[i];
 
        vector<long long> prefix_sum(n + 1, 0);
        for(int i=1;i<=n;i++)
            prefix_sum[i] = prefix_sum[i - 1] + a[i - 1];
 
 
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
 
            long long rsum = prefix_sum[r] - prefix_sum[l-1];
            long long addsum = ((r - l + 1) * k);
 
            long long suma = sum - rsum + addsum;
 
            if(suma % 2 == 0){
                cout<<"NO
";
            }
            else{
                cout<<"YES
";
            }
        }
    }
 
    return 0;
}