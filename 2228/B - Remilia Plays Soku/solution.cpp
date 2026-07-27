//INCOMPLETE
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n,x1,x2,k;
        cin>>n>>x1>>x2>>k;
 
        if(n <= 3){
            cout<<1<<endl;
        }
        else{
 
            int a = abs(x1 - x2);
            cout<<(a > (n-a) ? (n - a) + k : a + k)<<endl;
        }
    }
}