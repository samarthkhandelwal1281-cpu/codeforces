#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
 
        int k=0;
        int flag = 0;
        vector<int > ls,rs;
        for(int i=0;i<n;i++){
            if(a[i] != 0){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            if(n%2 == 0){
                k=2;
                cout<<k<<endl;
                cout<<"1 "<<n<<endl;
                cout<<"1 "<<n<<endl;
            }else{
                k = 4;
                cout<<k<<endl;
                cout<<"1 "<<(n-1)<<endl;
                cout<<"1 "<<(n-1)<<endl;
                cout<<(n-1)<<" "<<n<<endl;
                cout<<(n-1)<<" "<<n<<endl;
            }
        }else{
            cout<<k<<endl;
        }
    }
 
    return 0;
}