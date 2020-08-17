#include<bits/stdc++.h>

using namespace std;

int find(double p) 
{ 
    return ceil(sqrt(2*365*log(1/(1-p)))); 
} 
  
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    float p=0;
    cin>>p;
    p = p/100;
    cout<<find(p)<<"\n";

    return 0;
}