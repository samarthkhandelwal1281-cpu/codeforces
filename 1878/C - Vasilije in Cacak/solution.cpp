    #include<bits/stdc++.h>
    using namespace std;
 
    int main(){
        long long t;
        cin>>t;
        while(t--){
            long long n,k,x;
            cin>>n>>k>>x;
 
            long long sum = (k*(k+1))/2;
            if(sum > x)
                cout<<"NO
";
            else{
                sum = ((n+1)*k) - sum;
                // for(long long i=1;i<=k;i++)  
                //     sum += i;
            
                if(sum < x)
                    cout<<"NO
";
                else
                    cout<<"YES
";
            
            }
        }
 
        return 0;
}