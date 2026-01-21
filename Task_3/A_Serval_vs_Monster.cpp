#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std ; 

int NumOfAttacks(int h , int a ){
    if(h == 1) return 1 ; 
    if(a == 1 ) return h; 

    int NumOfAttacks = 0 ; 
    while (h >0 )
    {
        h-=a ; 
        NumOfAttacks++; 
    }
    
    return NumOfAttacks; 
}

int main()
{
    int h , a ; 
    cin >> h >> a ; 

    cout << NumOfAttacks(h,a); 
    return 0 ; 
    
}