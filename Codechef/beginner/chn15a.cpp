#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n],count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]+=k;
        }
        for(int i:a){
            if(i%7==0) count++;
        }
        cout<<count<<endl;

            
    }
    return 0;
}