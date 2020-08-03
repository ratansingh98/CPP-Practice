#include<iostream>

using namespace std;

int main(){
    int t, b;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>b;
        b = b-2;
        b /=2;
        cout<<b*(b+1)/2<<endl;
    }
    return 0;
}