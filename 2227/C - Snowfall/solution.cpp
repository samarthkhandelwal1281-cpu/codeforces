//INCOMPLETE
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k=0,t=1;
        cin>>n;
 
        int arr[n],b[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        for(int i=0;i<n;i++){
            if(arr[i]%6==0){
                b[k++] = arr[i];
            }
        }
 
        for(int i=0;i<n;i++){
            if(arr[i]%6!=0){
                if(arr[i]%2==0)
                    b[k++] = arr[i];
                if(arr[i]%3==0){
                    b[n-t] = arr[i];
                    t++;
                }
            }
        }
 
        for(int i=0;i<n;i++){
            if(arr[i]%6 != 0 && arr[i]%2 != 0 && arr[i]%3 != 0)
                b[k++] = arr[i];
        }
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}