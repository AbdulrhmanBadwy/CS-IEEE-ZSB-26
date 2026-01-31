#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std ; 

int NumberConfigration(int n ){
    if(n%2 != 0 ) return 0 ; 

    return floor(n/4)+1; 
}

int main()
{
    int t; 
    cin >> t; 

    while(t--){
        int n ; 
        cin >> n; 

        cout << NumberConfigration(n) << endl ; 

    }
    return 0 ; 
    
}