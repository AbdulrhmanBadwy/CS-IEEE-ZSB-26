#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std ; 

int dreamoon(string s2 , int index , int currentPosition , int targetPostion)
{
    // Base Case 
    if(index == s2.length()){
        if(currentPosition==targetPostion) return 1 ; 
        else return 0 ; 
    }
    
    // Sub-Problem and Logic 
    int PathPositive = 0  , pathNegative = 0 ; 
    if(s2[index] == '+')   
        PathPositive= dreamoon(s2,index+1 , currentPosition+1 , targetPostion); 
    else if (s2[index] =='-')
        pathNegative = dreamoon(s2,index+1, currentPosition-1 , targetPostion); 
    else {
        PathPositive= dreamoon(s2,index+1 , currentPosition+1, targetPostion); 
        pathNegative = dreamoon(s2,index+1, currentPosition-1, targetPostion); 
        
        
    }

    return PathPositive+pathNegative; 
}

int main()
{
    string s1 ,  s2 ; 
    cin >> s1 >> s2 ; 

    int targetPosition = 0 ; 

    for(char s : s1 ){
        if(s == '+') targetPosition++; 
        else targetPosition--; 
    }
    
    int Unkown = 0 ; 
    for(char s : s2){
        if(s=='?')Unkown++; 
    }

    double Propaitlity = dreamoon(s2,0,0,targetPosition)/pow(2,Unkown); 

    cout << fixed << setprecision(12) <<  Propaitlity; 

    return 0 ; 
    
}