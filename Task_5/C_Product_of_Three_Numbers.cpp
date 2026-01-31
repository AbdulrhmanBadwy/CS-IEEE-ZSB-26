#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>


using namespace std ; 

void ThreeDistinctIntegers(long long Number){

    
    for(long long a = 2 ; a*a <= Number; a++){
        if(Number%a != 0 ) continue;

        long long remainder = Number/a; 

        for(long long b = a+1 ; b*b <= remainder;b++){
            if(remainder%b != 0 ) continue;

            int c = remainder / b ; 

            if (c>= 2 && a !=b && b!=c && a!=c){
                 cout << "YES\n"; 
                 cout <<  a << " " << b << " " << c << endl; 
                return; 
            }
        }
    }
    cout << "NO\n"; 

}

int main()
{
    int t ; 
    cin >> t; 
    
    while(t--){
        long long  Number ; 
        cin >> Number ; 

        ThreeDistinctIntegers(Number); 

    }
    return 0 ; 
    
}