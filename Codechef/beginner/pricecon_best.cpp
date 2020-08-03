#include<bits/stdc++.h>
#define uint16_t int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int register t,n,p;
    cin>>t;
    while(t--){
        cin>>n>>p;
        int a[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if (a[i]>p) sum+=a[i]-p;
        }            
        cout<<sum<<endl;
    }
    return 0;
}