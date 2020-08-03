#include<iostream>

using namespace std;

int main(){

    int t,n,m,i;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++)
            cin>>m>>m;
        
        m=0;
        for(i=1;i<=n;i++)
            m =m^i;
        cout<<m<<endl;

    }
    return 0;
}