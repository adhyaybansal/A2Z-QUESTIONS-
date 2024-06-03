// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int ornum=n;
//     int cnt=0;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if(i%j==0){
//                 cnt = cnt+j;
//             }
//         }
//     }
//     cout<<cnt;

//     return 0;
// } 

// optimized  one
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long long cnt = 0;
        for (int i = 1; i <= N; ++i) {
            cnt += i * (N / i);
        }
        return cnt;
    
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends
