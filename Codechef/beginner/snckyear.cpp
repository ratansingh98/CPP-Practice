#include<iostream>

using namespace std;

int main(){
    int n,t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n==2010|| n==2015|| n==2016|| n==2017 || n==2019)
            cout<<"HOSTED"<<endl;
        else
            cout<<"NOT HOSTED"<<endl;
    }
    
    return 0;
}