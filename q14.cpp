#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int ornum=n;
    while(n>0){
        int dig = n%10;
        arr.push_back(dig);
        n = n/10;
    }
    int cnt = 0;
    for(int i=0;i<arr.size();i++){
        cnt = cnt+1;
    }
    int arm = 0;
    for(int i=0;i<arr.size();i++){
        arm = arm + pow(arr[i],cnt);
    }
    if(arm==ornum){
        cout<<"Armstrong"<<endl;
    }
    else{
        cout<<"Not Armstrong"<<endl;
    }
}