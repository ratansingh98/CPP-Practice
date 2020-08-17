#include<bits/stdc++.h>

using namespace std;

void run_test(){
    int64_t x,y,z;
    cin>>x>>y>>z;
    while(z){
        if(z%x==y)
            break;
        z--;
    }
    cout<<z<<"\n";

}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    uint16_t t=0;
        
    cin>>t;
    
    while(t--){

        run_test();
    }
    return 0;
}