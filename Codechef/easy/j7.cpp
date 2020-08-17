#include<bits/stdc++.h>

using namespace std;

void run_test(){
    int p,s;
    cin>>p>>s;
    float l = (p - sqrt(p * p - 24 *s )) / 12;
    float v = l * (s / 2.0 - l * (p / 4.0 - l));
    cout << fixed<<setprecision(2)<< v<<endl;

}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    uint16_t t;
        
    cin>>t;
    while(t--){

        run_test();
    }
    return 0;
}