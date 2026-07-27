#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
 
        int cnt = 0;
        char el = s[0];
        for(int i=1;i < s.size();i++){
            if(el != s[i]){
                s.erase(i,1);
                s.erase(i-1,1);
                cnt++;
                el = s[0];
                i = -1;
            }
        }
        if(cnt%2 == 1)
            cout<<"DA
";
        else
            cout<<"NET
";
    }
 
    return 0;
}