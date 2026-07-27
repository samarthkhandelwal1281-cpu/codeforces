#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        vector<char> c(n);
        for(int i=0;i<n;i++)
            cin>>c[i];
 
        int fp, bp;
 
        for(int i=0;i<n;i++){
            if(c[i]=='B'){
                fp=i;
                break;
            }
        }
        for(int i=(n-1);i>=0;i--){
            if(c[i] == 'B'){
                bp = i+1;
                break;
            }
        }
 
        cout<<bp-fp<<endl;
    }
    return 0;
}