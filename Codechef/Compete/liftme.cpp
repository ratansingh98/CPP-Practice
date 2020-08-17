#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin>>t;
    while(t--){

        int n,q;
        cin>>n>>q;
        long int total=0,source=0;
        int f1,f2;
        while(q--){
            cin>>f1>>f2;
            total += abs(source-f1)+abs(f1-f2);
            source = f2;
        }
        cout<<total<<"\n";

    }

    return 0;
}