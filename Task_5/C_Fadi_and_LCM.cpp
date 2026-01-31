#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#define ll long long 
using namespace std ; 

ll gcd (ll a , ll b ){
    while (b!=0 )
    {
        ll a2 = a ; 
        a = b ; 
        b = a2%b; 
    }

    return a ; 
    
}
int main()
{
    ll x; 
    cin >> x ; 

    if(x == 1 ){
        cout << 1 << " " << 1 ; 
        return 0; 
    }
  ll bestA = 1 , bestB = x ; 
    for(ll i = 1 ; i*i <= x ; i++){
        
        if(x%i == 0 ){
            ll a = i ; 
            ll b = x/i ; 
            if(gcd(a,b) == 1)
            {
                if(max(a,b) < max(bestA, bestB)){
                    bestA = a; 
                    bestB= b ; 
                }
            }
        }
    }

    cout << bestA << " " << bestB ; 
    return 0 ; 
    
}