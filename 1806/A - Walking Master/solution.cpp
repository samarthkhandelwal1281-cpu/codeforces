#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        long long x1,y1,x2,y2,c=0;
        cin>>x1>>y1>>x2>>y2;
 
        if(y2 < y1){
            cout<<-1<<endl;
            continue;
        }
 
        c = y2 - y1;
        x1 += c;
        if(x1 < x2){
            cout<<-1<<endl;
            continue;
        }   
 
        c += (x1 - x2);
        cout<<c<<endl;
 
    }
    return 0;
}