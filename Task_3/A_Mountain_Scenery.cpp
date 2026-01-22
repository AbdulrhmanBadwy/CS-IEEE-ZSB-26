#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std ; 

bool IsIt(int peaks , int arr[] , int index ){

    if(((peaks-1) > arr[index-1]) && ((peaks-1) > arr[index+1])){
        return true; 
    }
    return false; 
}

int main()
{
    int n ,k ;
    cin >> n >> k ; 

    int *arr = new int [2*n+1]; 

    for(int i = 0 ; i < 2*n+1 ; i++){
        cin>> arr[i]; 
    }


    for(int i =0 ; i < 2*n+1 && k>0 ; i++){
        if(i%2!=0){
                
                if(IsIt(arr[i] , arr , i))
                {
                    arr[i] -=1 ;
                    k--; 
                } 
            }
    }
    
    
    for(int i = 0 ; i < 2*n+1 ; i++){
        cout << arr[i] << " " ; 
    }

    return 0 ; 
    
}