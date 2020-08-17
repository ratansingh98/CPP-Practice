#include<bits/stdc++.h>
#include <string> 

using namespace std;

void run_test(){
	int l,r;
    cin>>l>>r;
    int l2=l%10,r2=r%10;
    int l1=l-(l2);
    int r1=r-(r2);
    int d=(r1-l1)*3/10;
    if(l2==3)
        d-=1;
    else if(l2>3 && l2<=9)
        d-=2;
        if(r2==2)
        d+=1;
        else if(r2>=3 && r2<9)
        d+=2;
        else if(r2==9)
        d+=3;
    cout<<d<<endl;
    

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