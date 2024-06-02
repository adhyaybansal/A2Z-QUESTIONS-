#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    vector<int> arr;
    int max;
    if(n1>n2){
        max = n1;
    }
    else{
        max = n2;
    }
    for(int i=1;i<=max;i++){
        if(n1%i==0 && n2%i==0){
            arr.push_back(i);
        }
    }
    if(arr[0]>arr[1]){
        cout<<"gcd is:-> "<<arr[0]<<endl;
    }
    else{
        cout<<"gcd is:-> "<<arr[1]<<endl;
    }


    return 0;
}