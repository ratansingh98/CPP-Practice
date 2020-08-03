#include<iostream>

#define MAX 102
using namespace std ; 

int main ()
{
    int t , m , n  , k , arr[MAX] , i , temp; 
    cin >>t ; 
    while (t--) {
	cin >> n >> m >> k ; 

        for (i = 1; i<=n ; i++){    arr[i] = 0 ; }

	for (i = 0 ;i<m ; i++){
	    cin >> temp ; 
	    arr[temp] += 1; 
	}
 
	for (i = 0 ;i<k ; i++){
	    cin >> temp ; 
	    arr[temp] += 1 ; 
	}

	int firans = 0  , secans = 0 ; 
	for (i = 1 ; i<= n ; i++){
	    if (arr[i] == 2)
		firans ++ ; 
	    else if (arr[i] == 0)
		secans ++ ; 
	}

	cout << firans << " " <<secans <<endl; 
    }
return 0 ;
}