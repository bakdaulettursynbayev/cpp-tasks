#include <iostream>
#include <set>
using namespace std;

int main(){
    string s;
    cin>>s;
    set<string>ss;

    for(int i=0; i<s.size(); i++){
        string x;
        cin>>x;
        ss.insert(x);
    }

    for(auto it=ss.begin(); it!=ss.end(); ++it){
        if(s==*it){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }

    return 0;
}