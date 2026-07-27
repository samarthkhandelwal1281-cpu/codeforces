#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        int c=0;
        while(1){
            int b[n];
            for(int i=0;i<n;i++){
                b[i] = a[i] ^ c;
            }
 
            int bTotal = b[0];
            for(int i=1;i<n;i++){
                bTotal ^= b[i];
            }
            if(bTotal == 0){
                cout<<c<<endl;
                break;
            }
            c++;
            if(c > 256){
                cout<<-1<<endl;
                break;
            }
        }
    }
}