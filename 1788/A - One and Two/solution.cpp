#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n,c=0;
        cin>>n;
 
        int a[n],p=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            // p *= a[i];
            if(a[i] == 2){
                c++;
            }
        }
 
        // int k=0;
        // int p1 = 1;
 
        // for(int i=0;i<n;i++){
        //     p1 *= a[i];
        //     p /= a[i];
            
        //     if(p1 == p)
        //         break;
        //     k++;
        // }
 
        int k=0;
        int c1,c2;
        c1 = c2 = 0;
 
        for(int i=0;i<n;i++){
            if(a[i] == 2){
                c1++;
                c--;
            }
            if(c1 == c)
                break;
            k++;
        }
 
        if(k >= n){
            cout<<-1<<endl;
        }else{
            cout<<(k+1)<<endl;
        }
 
    }
 
    return 0;
}