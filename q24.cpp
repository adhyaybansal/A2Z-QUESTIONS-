#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    for(int i=arr.size()-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}