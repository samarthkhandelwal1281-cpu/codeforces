//INCOMPLETE
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
 
        string x,s;
        cin>>x>>s;
 
        int p = 0;
        while(p <= 5){
            if(x.find(s) != string::npos){
                cout<<p<<endl;
                break;
            }else{
                x += x;
                p++;
            }
        }
        if(p > 5)
            cout<<-1<<endl;
    }
 
    return 0;
}