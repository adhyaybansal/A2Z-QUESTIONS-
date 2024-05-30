//{ Driver Code Starts
#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
#include <unordered_map> 
using namespace std;


// } Driver Code Ends
class AutoCompleteSystem {
public:
    unordered_map<string,int> sentenceFreq;
    string currentInput;
 
    AutoCompleteSystem(vector<string>& sentences, vector<int>& times) {
        for(int i=0;i<sentences.size();i++){
            sentenceFreq[sentences[i]] = times[i];
        }
        currentInput="";
    }
    vector<string> input(char c) {
        if(c=='#'){
            sentenceFreq[currentInput]++;
            currentInput="";
            return {};
        }
        else{
            currentInput += c;
            vector<pair<int,string>>candidates;
            for(const auto& entry:sentenceFreq){
                if(entry.first.find(currentInput)==0){
                    candidates.push_back({entry.second,entry.first});
                }
            }
            sort(candidates.begin(),candidates.end(),[](const pair<int,string>& a,const pair<int,string>& b){
                if(a.first==b.first) return a.second<b.second;
                return a.first>b.first;
            });
            
            vector<string>top3;
            for(int i=0;i<min(3,(int)candidates.size());i++){
                top3.push_back(candidates[i].second);
            }
            return top3;
        }
    }
};

/**
 * Your AutoCompleteSystem object will be instantiated and called as such:
 * AutoCompleteSystem* obj = new AutoCompleteSystem(sentences, times);
 * vector<string> param_1 = obj->input(c);
 */


//{ Driver Code Starts.

int main() {

    int t;
	cin >> t;
    cin.ignore();
    while(t--) {
		int n;
		cin>>n;
        cin.ignore();
        vector<string> sentences(n);
		vector<int> times(n);
		for (int i = 0; i < n; ++i){
            
			getline(cin,sentences[i]);
			cin>>times[i];
            cin.ignore();
		}
		AutoCompleteSystem *obj = new AutoCompleteSystem(sentences,times);
		int q;
		cin>>q;
        cin.ignore();

		for (int i = 0; i < q; ++i){
			string query;
			getline(cin,query);
            string qq = "";
            for(auto &x:query){
			    qq+=x;
                vector<string> suggestions = obj->input(x);
                if(x=='#')
                    continue;
                cout<<"Typed : \""<<qq<<"\" , Suggestions: \n";
				for(auto &y:suggestions){
					cout<<y<<"\n";
				}
			}
		}
	}
	return 0;
}




// } Driver Code Ends
