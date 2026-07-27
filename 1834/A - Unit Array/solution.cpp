#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        map<int, int> m;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            m[a]++;
        }
 
        int s = m[1] - m[-1];
 
        int c=0;        
        while(s < 0 || (m[-1]%2==1)){
            c++;
            m[1]++;
            m[-1]--;
            s = m[1] - m[-1];
        }
        
        cout<<c<<endl;
    }
 
    return 0;
}