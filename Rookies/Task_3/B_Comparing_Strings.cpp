#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std ; 

int main()
{
    int a , b;
    cin >> a >> b;  
    string copiesOfA ,copiesOfB;
    for(int i = 0 ; i < a ; i++){
        copiesOfB+=to_string(b); 
    }
    for(int i = 0 ; i < b ; i++){
        copiesOfA+=to_string(a); 
    }
    
    if(a > b){
        cout << copiesOfB ; 
    }else if(b > a ) {
        cout << copiesOfA ; 
    }else {
        cout << copiesOfA ; 
    }
    return 0 ; 
    
}