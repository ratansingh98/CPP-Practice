#include<iostream>

using namespace std;

int main(){
    int t,sim,diff,unknown;
    string s1,s2;
    cin>>t;
    while(t--){
        cin>>s1;
        cin>>s2;
        sim=0,diff=0,unknown =0;
        for(int i=0;i<s1.length();i++){

            if(s1[i]==s2[i] && s1[i]!='?')
                sim+=1;
            else if(s1[i]=='?' || s2[i]=='?')
                unknown +=1;
            else
                diff +=1;
            }

        cout<<diff<<" "<<diff+unknown<<endl;


    }
    return 0;
}