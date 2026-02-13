#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<iomanip>

using namespace std ; 

bool IsConditionable(int amount , float balance){
    if(amount%5 ==0 && amount+.50 <= balance) return true ; 
    else return false; 
}

float Withdraw(int amount , float balance){
    if(IsConditionable(amount , balance)) {
        return balance - amount-.50 ; 
    }
    else 
        return balance;  
}
int main()
{
    int amount ; 
    float balance ; 
    cin >> amount >> balance ; 

    cout << fixed << setprecision(2) << Withdraw(amount, balance);

    return 0 ; 
    
}