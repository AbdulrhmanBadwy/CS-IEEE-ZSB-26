#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std ; 


void cntDivisors(long long n){
    long long cnt = 1 ; 

    for(long long i = 2 ; i *i <= n ; i++){

        if(n%i==0){

            long long timesI = 0 ; 
            while(n%i == 0 ){
                n/=i ; 
                timesI++; 
            }

            cnt *=(timesI+1); 
        }
    }

    if(n>1){
        cnt*=2; 
    }

    cout << cnt << endl; 
}

int  main()
{
    long long n ; 
    cin >> n; 
    
    while(n--){
        long long Number ; 
        cin >> Number ; 

        cntDivisors(Number);
    }
    return 0 ; 
    
}