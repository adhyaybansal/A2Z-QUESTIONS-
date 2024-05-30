#include <iostream>
#include <vector>
using namespace std;

class Fibonacci{
    public:
    vector<int> arr;
    int n=10000;
    void Fibonaccin(int n){
        if(n==0){
            cout<< 0<<endl;
        }
        else{
            arr[0] =1;
            for(int i=1;i<=n;i++){
                arr.push_back({arr[i-1]+arr[i-2]});
            }
        }
        for(int i=0;i<=n;i++){
            cout<<arr[i]<<" ";
    }
    }

};
int main(){
    Fibonacci obj;
    obj.Fibonaccin(10);
    

    return 0;
};