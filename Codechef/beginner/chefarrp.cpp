#include<iostream>

using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int temp[n],count=0;
        for(int i=0;i<n;i++)
            cin>>temp[i];
        for(int i=0;i<n;i++){
            int m=1,s=0;
            for(int j=i;j<n;j++){
                m *=temp[j];
                s +=temp[j];
                if(m==s)
                    count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}