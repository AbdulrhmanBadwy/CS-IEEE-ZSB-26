#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std ; 


long long lessDiff(long long total , long long sumA){
    return abs( total - 2*sumA);
}

long long  Less_Difference(int index , long long sumA , vector<long long > &weights, long long total){

    if(index == weights.size()) return lessDiff(total,sumA); 

    long long take = Less_Difference(index+1 , sumA+weights[index] , weights,total); 

    long long leave = Less_Difference(index+1, sumA , weights,total); 

    return min(leave,take); 

}

int main()
{
    long long total = 0 ; 
    int n ; 
    cin >> n ; 
    vector<long long > weights(n) ; 
    for(int i = 0 ; i < n ; i++){
        cin >> weights[i]; 
        total+=weights[i]; 
    }

    cout << Less_Difference(0,0,weights,total); 


    return 0 ; 
    
}