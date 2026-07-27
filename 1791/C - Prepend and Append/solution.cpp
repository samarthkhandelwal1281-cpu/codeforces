#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        string s;
        cin>>s;
 
        int c=0;
        for(int i=0;i<n/2;i++){
            if(s[i] != s[n-i-1])
                c++;
            else
                break;
        }
 
        cout<<(n-(2*c) > 0 ? n-(2*c) : 0)<<endl;
    }
}