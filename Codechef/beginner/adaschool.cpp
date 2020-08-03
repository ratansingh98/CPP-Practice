#include<iostream>

using namespace std;

int main(){

    int t,m,n;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if((n*m)%2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
