#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        vector<long long> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
 
        long long max = *max_element(a.begin(), a.end());
        vector<long long> b,c;
 
        for(int i=0;i<n;i++){
            if(a[i]!=max){
                b.push_back(a[i]);
            }else{
                c.push_back(a[i]);
            }
        }
        
        if(b.size() == 0)
            cout<<-1<<endl;
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto bi : b) cout<<bi<<" ";
            cout<<endl;
            for(auto ci : c) cout<<ci<<" ";
            cout<<endl;
        }
    }
 
    return 0;
}