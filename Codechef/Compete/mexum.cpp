#include<bits/stdc++.h>

using namespace std;


const long long mod=998244353;
long long power[100005];
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin>>t;

    //Precompute power of 2
    power[0]=1;
    for(int i=1;i<100005;i++)
        power[i] = 2*power[i-1]%mod;

    while(t--){
        int n;
        cin>>n;
        long long input[n];
        unordered_map<long long, long long>count;

        for(int i=0;i<n;i++){
            cin>>input[i];
            count[input[i]]++;
        }
        long long ans=0,sum=0,prod=1;
        long long newMex;
        for(int mex=1;mex<=n+1;mex++){
            sum = (sum+count[mex])%mod;
            newMex = (mex*prod)%mod;
            newMex=(newMex*power[n-sum])%mod;
            ans = (ans+newMex)%mod;
            prod = (prod*(power[count[mex]]-1))%mod;
        }
        cout<<ans<<"\n";
    }

    return 0;
}