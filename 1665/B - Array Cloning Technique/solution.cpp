#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        map<long long,int> mp;
        for(auto i : a){
            mp[i]++;
        }
        int highest_count = 0;
        for(auto i : mp){
            highest_count = max(highest_count, i.second);
        }
        int cnt = 0;
        while(highest_count < n){
            cnt++;
            if(highest_count*2 <= n){
                cnt += highest_count;
                highest_count *= 2;
            }else{
                cnt += n - highest_count;
                highest_count = n;
            }
        }
 
        cout<<cnt<<endl;
    }
}