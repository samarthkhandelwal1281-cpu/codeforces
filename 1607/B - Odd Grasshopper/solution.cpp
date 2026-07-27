#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x, n;
        cin>>x>>n;
 
        int patry = (x%2 == 0 ? 1 : -1);
        int rem = n%4;
        switch(rem){
            case 0:
                cout<<x<<endl;
                break;
            case 1:
                cout<<(x - patry*n)<<endl;
                break;
            case 2:
                cout<<(x + patry*1)<<endl;
                break;
            case 3:
                cout<<(x + patry*(n+1))<<endl;
                break;
        }
 
    }
}