#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        
        int ans = 0;
        
        long long new_a = (2*b) - c;
        if(new_a/a > 0 && new_a%a == 0){
            ans++;
        }
        long long new_b = (a+c)/2;
        if(new_b/b > 0 && new_b%b == 0 && (c - a)%2 == 0){
            ans++;
        }   
        long long new_c = (2*b) - a;
        if(new_c/c > 0 && new_c%c == 0){
            ans++;
        }
 
        if(ans){
            cout<<"YES
";
        }
        else{
            cout<<"NO
";
        }
    }
 
    return 0;
}