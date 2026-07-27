#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
 
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
 
        long long c=0;
        long long x;
        for(int i=0;i<n;i++){
            cin>>x;
            c += min(x, a-1);
        }
 
        cout<<(c+b)<<"
";
    }
    return 0;
}