#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n,ans = 1;
        cin>>n;
 
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
 
        if(n>2){
        int b=0,x=1,a = arr[0];
        for(int i=0;i<n;i++){
            if(a != arr[i] && b != arr[i]){
                x++;
                if(x >= 3){
                    ans=0;
                    break;
                }
                b = arr[i];
            }
        }
        
        int a_counter=0,b_counter=0;
        if(b != 0){
            for(int i=0;i<n;i++){
                if(arr[i] == a)
                    a_counter++;
                else if(arr[i] == b)
                    b_counter++;
            }     
            if((a_counter - b_counter) >= 2 || (a_counter - b_counter) <= -2)
                ans=0;
        }
 
        }
        
 
        if(ans == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
    }
    return 0;
}