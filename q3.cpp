//{ Driver Code Starts
#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
#include <unordered_map> 
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string compareNM(int n, int m){
        if(n<m){
            return "lesser";
        }
        else if(n==m){
            return "equal";
        }
        else{
            return "greater";
            
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m ; cin>>n>>m;
        Solution obj;
        cout<<obj.compareNM(n,m)<<"\n";
    }
    return 0;
}
// } Driver Code Ends