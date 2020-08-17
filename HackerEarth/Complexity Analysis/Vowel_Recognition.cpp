#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s; 
        int sum=0,n=s.length();
        for(int i=0;i<n;i++){
            char c=s[i];
            c = tolower(c);
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                sum += ((n - i) * (i + 1));
        }
        cout<<sum<<"\n";
    }
    
    return 0;
}