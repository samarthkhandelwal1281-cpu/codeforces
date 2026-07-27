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
 
        int cost = 1,c=1;
        char prev;
        for(int i=1;i<n;i++){
            if(s[i] == s[i-1]){
                c++;
            }else{
                cost = max(cost, c);
                c=1;
            }
        }
        cost = max(cost, c);
        cout<<(cost+1)<<endl;
    }
}