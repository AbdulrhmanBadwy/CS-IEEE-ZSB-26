#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std ; 

long long  Odd_EvenFunction(long long  n ){
    cout << n << " " ; 

    if(n == 1  ) return 1; 

    if(n%2==0)
        return 1+Odd_EvenFunction(n/2); 
    
    return 1+Odd_EvenFunction(3*n+1); 
    
}

int main()
{
    long long  n ; 
    cin >> n; 
    Odd_EvenFunction(n); 
    return 0 ; 
    
}