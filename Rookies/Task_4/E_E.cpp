#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std ; 

bool vis[8]; 
string s ; 
vector<string> permutations ; 

void generatePermutations(string current){
    
    // Base Case 
    if(current.length() == s.length()){
        permutations.push_back(current); 
        return; 
    }
    
    // Sub-Problem and Logic 
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(vis[i] ) continue;

        if (i > 0 && s[i] == s[i - 1] && !vis[i - 1])
            continue;


        
        vis[i] = true; 
        generatePermutations(current+s[i]); 
        vis[i] = false ; 
    }
} 



int main()
{ 
    cin >> s ; 
    sort(s.begin(),s.end()); 
    generatePermutations(""); 
    cout << permutations.size() << endl; 
    for(string &p : permutations){
        cout << p << endl; 
    }
    return 0 ; 
    
}