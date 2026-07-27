#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long n,ob,cb;
        ob=cb=0;
        cin>>n;
 
        char s[n];
        for(long i=0;i<n;i++)
            cin>>s[i];
        
        for(long i=0;i<n;i++){
            if(s[i] == '(')
                ob++;
            else
                cb++;
        }
        if(ob == cb){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
 
    }
    return 0;
}