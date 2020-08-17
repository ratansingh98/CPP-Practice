#include<bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    uint16_t t=0;
    string m="";
    cin>>t>>m;
    while(t--){
        string s="";
        int temp=0;
        cin>>s;
        for(int c:s){
            if(c>=65 && c<=90)
                cout<<char(m[c-65]-32);
            else if(c>=97 && c<=122)
                cout<<m[c-97];
            else if(c==95)
                cout<<" ";
            else
                cout<<char(c);
        }
        cout<<"\n";
    }
    return 0;
}