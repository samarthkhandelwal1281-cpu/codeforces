#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        long long x,k;
        cin>>x>>k;
 
        vector<int> v;
        for(int i=x;i>0;i--)
            if((i%k != 0) && (x-i >= 0)){
                v.push_back(i);
                x -= i;
                i++;
            }
        
        cout<<v.size()<<endl;
        for(auto a : v)
            cout<<a<<" ";
        cout<<endl;
    }
 
    return 0;
}