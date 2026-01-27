#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std ; 

int Function_Non_Negative(int x){
    if(x < 0 ) return 0;
    if(x == 0 )
        return 1 ; 
    
    return x * Function_Non_Negative(x-1); 

}

int main()
{
    int n ; 
    cin >> n; 
    cout << Function_Non_Negative(n); 
    return 0 ; 
    
}