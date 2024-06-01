//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        int originalN = N;
        vector<int> vec;
        while(N>0){
            int dig = N%10;
            N = N/10;
            vec.push_back(dig);
        }
        int cnt = 0;
        for(int i=0;i<vec.size();i++){
            if(vec[i] != 0 &&originalN%vec[i]==0){
                cnt = cnt+1;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends