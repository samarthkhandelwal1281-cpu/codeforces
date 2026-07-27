#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
 
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int min = abs(0 - a[0]);
    for(int i=0;i<n;i++){
        if(min > abs(0 - a[i]))
            min = abs(0 - a[i]);
    }
    cout<<min<<endl;
 
    return 0;
}