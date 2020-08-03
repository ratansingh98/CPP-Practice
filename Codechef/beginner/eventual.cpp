#include<bits/stdc++.h>

using namespace std;

void run_test(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int count[26]={0};
    while(n--){
        count[(int)s[n]-97] +=1;
    }
    for(int i:count){
        if (i%2 !=0){cout<<"NO\n";return;}

    }
    cout<<"YES\n";
        
    

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    uint16_t t;
        
    cin>>t;
    while(t--){
        run_test();
    }
    return 0;
}