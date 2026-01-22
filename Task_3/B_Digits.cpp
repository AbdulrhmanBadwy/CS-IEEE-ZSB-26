#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std ; 

int numOfDigit(int n , int k ){
    return 1+log(n)/log(k); 
}
int main()
{
    int n ,k ; 
    cin >> n >>k ; 
    cout << numOfDigit(n,k); 
    return 0 ; 
    
}