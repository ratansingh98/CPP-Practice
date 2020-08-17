#include<bits/stdc++.h>

using namespace std;

void run_test(){
    int n;
    cin>>n;
    for(int i=0;i<n/3;i++) 
        cout<<"abc";

    string s = "abc";
    for(int i=0;i<n%3;i++) 
        cout<<s[i];
    cout<<"\n";

}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    uint16_t t=0;
        
    cin>>t;
    while(t--){

        run_test();
    }
    return 0;
}