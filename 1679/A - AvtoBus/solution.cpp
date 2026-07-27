#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long min = 0,max = 0;
        if(n < 4 || n%2 == 1){
            cout<<"-1
";
        }
        else{
            min = (n+5) / 6;
            max = n / 4;
            cout<<min<<" "<<max<<"
";
        }
 
    }
 
    return 0;
}