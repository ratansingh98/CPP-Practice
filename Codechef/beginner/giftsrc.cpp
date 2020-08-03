#include<bits/stdc++.h>

using namespace std;

void run_test(){
    int n,x=0,y=0;
    string s;
    cin>>n;
    cin>>s;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'L' && s[i] != s[i-1]&& s[i-1] != 'R')
            {
                x -= 1;
            }
            else if(s[i] == 'R'&& s[i] != s[i-1] && s[i-1] != 'L')
            {
                x += 1;
            }
            else if(s[i] == 'U'&& s[i] != s[i-1]&& s[i-1] != 'D')
            y+=1;
            else if(s[i] == 'D' && s[i] != s[i-1] && s[i-1] != 'U')
            y-=1;
        }
    
    cout<<x<<" "<<y<<"\n";

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