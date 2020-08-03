#include<bits/stdc++.h>
#include <vector>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    uint16_t n;    
    cin>>n;
    int temp;
    vector<int> e,o;
    while(n--){
        cin>>temp;
        if(temp%2==0)
            e.push_back(temp);
        else  
            o.push_back(temp);            
    }
    if(e.size()>o.size()) cout<<"READY FOR BATTLE\n";
    else cout<<"NOT READY\n";
    o.erase(o.begin(), o.end());
    e.erase(e.begin(), e.end());
    return 0;
}