#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
 
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
 
        vector<char> s;
        for(int i=1;i<=n;i++)
            s.push_back('i');
        
        if(a == b && a == n){
            cout<<"Yes"<<endl;
            continue;
        }
        if(n - a - b <= 1){
            cout<<"No"<<endl;
            continue;
        }else{
            cout<<"Yes"<<endl;
        }
    }
 
    return 0;
}