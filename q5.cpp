#include <iostream>
#include <vector>
using namespace std;

class Fibonacci{
    public:
    vector<int> arr;
    
    void Fibonaccin(int n){
        if(n==0){
            cout<< 0<<endl;
        }
        else if(n==1){
            cout<< 1<<endl;
        }
        else{
            arr.push_back(0);
            arr.push_back(1);
            for(int i=2;i<=n;i++){
                arr.push_back({arr[i-1]+arr[i-2]});
            }
        }
    }
    void getout(int in){
        cout<<arr[in]<<endl;
    }

};
int main(){
    Fibonacci obj;
    int input;
    cin>>input;
    int n=10000;
    obj.Fibonaccin(n);
    obj.getout(input);
    

    return 0;
};