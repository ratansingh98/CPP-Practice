#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;


int main(){
    cin.tie(0);cout.tie(0),ios_base::sync_with_stdio(0);
    uint16_t t;
    
    cin>>t;
    while(t--){
        uint16_t ti=0,uu=0,n,m,k,t1;;
        cin>>n>>m>>k;
        map<int,int> temp;
        for(int i=1;i<=m;i++) cin>>t1,temp[t1]+=1;
        for(int i=1;i<=k;i++) cin>>t1,temp[t1]+=1;
        for(int i=1;i<=n;i++){
            if(temp[i]==0) uu++;
            if(temp[i]==2) ti++;
        }
        cout<<ti<<" "<<uu<<endl;

    }
    return 0;
}